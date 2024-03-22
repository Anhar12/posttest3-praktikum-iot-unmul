#include <ESP8266WiFi.h> 
#include <ThingerESP8266.h>
#include <DHT.h>

// KONFIGURASI AWAL
#define USERNAME "anharkhoirun" //Username thinger.io
#define DEVICE_ID "posttest3" // Lihat pada setting dari device yang sudah dibuat di thinger.io
#define DEVICE_CREDENTIAL "k9Npx_2HZhqBHm4O" // Lihat pada setting dari device yang sudah dibuat di thinger.io (Generate random saja)

#define SSID "punya gw" //Hotspot yang kita pakai
#define SSID_PASSWORD "slebew123"

#define DHTPIN D2 //Pin data dari DHT terhubung ke pin D4 NodeMCU
#define LEDMERAH D8 //Kaki anoda dari LED terhubung ke pin D8 NodeMCU
#define LEDKUNING D7 //Kaki anoda dari LED terhubung ke pin D7 NodeMCU
#define LEDHIJAU D6 //Kaki anoda dari LED terhubung ke pin D6 NodeMCU
#define BUZZER D1
#define DHTTYPE DHT11 //Mengatur TYPE DHT (Karena ada 2 jenis [DHT11 & DHT22])

// Inisialisasi objek untuk terhubung ke Thinger.io
ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

// Inisialisasi objek untuk DHT11
DHT dht(DHTPIN, DHTTYPE);

// Variabel untuk menyimpan data suhu
float c, k, f, r;
bool ledMerah = false ;
bool ledKuning = false;
bool ledHijau = false;
int Tone = 0;

void setup() {
    pinMode(LEDMERAH, OUTPUT);
    pinMode(LEDKUNING, OUTPUT);
    pinMode(LEDHIJAU, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    dht.begin();
    thing.add_wifi(SSID, SSID_PASSWORD);
    // Setup sensor DHT11
    thing["dht11"] >> [](pson& out){
      out["suhu celcius"] = c;
      out["suhu kelvin"] = k;
      out["suhu reamur"] = r;
      out["suhu fahrenheit"] = f;
    };
    thing["Led"] >> [](pson& out){
      out["led merah"] = ledMerah;
      out["led kuning"] = ledKuning;
      out["led hijau"] = ledHijau;
    };
}

void loop() {
  thing.handle();
  c = dht.readTemperature(); //Membaca suhu dalam satuan Celcius
  k = c + 273.15;
  f = (c * 9/5) + 32;
  r = c * 4/5;

  ledMerah = digitalRead(LEDMERAH);
  ledKuning = digitalRead(LEDKUNING);
  ledHijau = digitalRead(LEDHIJAU);
  Tone = (c-36)*10;

  if (c < 30){
    digitalWrite(LEDHIJAU, 1);
    digitalWrite(LEDMERAH, 0);
    digitalWrite(LEDKUNING, 0);
    noTone(BUZZER);
  } else if (c <= 36){
    digitalWrite(LEDHIJAU, 0);
    digitalWrite(LEDMERAH, 0);
    digitalWrite(LEDKUNING, 1);
    noTone(BUZZER);
  } else {
    digitalWrite(LEDHIJAU, 0);
    digitalWrite(LEDMERAH, 1);
    digitalWrite(LEDKUNING, 0);
    tone(BUZZER, Tone);
  }
}
