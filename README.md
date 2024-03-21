# POSTTEST 3 - PRAKTIKUM - IoT - UNMUL

Kelompok 6 Kelas B:
- 2109106051 - Reihan Al Sya'ban
- 2109106081 - Anhar Khoirun Najib
- 2109106104 - M. Rangga Yaqub Wijaya

## Rangkaian Monitoring Suhu Ruangan Server Menggunakan DHT11, LED, dan Piezo Buzzer Menggunakan Platform thinger.io
### Deskripsi 
Perangkat ini menggunakan NodeMCU yang akan memonitoring suhu pada ruangan server menggunakan DHT11, kemudian akan menyalakan LED dan Piezo Buzzer dalam kondisi tertentu

### Metode IoT
Rangkaian ini dilengkapi dengan DHT11 sebagai sensor yang akan membaca suhu ruangan, apabila suhu ruangan dibawah 30°C maka perangkat akan menyalakan LED berwarna hijau yang berarti suhu dalam kondisi normal. Kemudian apabila suhu ruangan diantara 30°C hingga 36°C maka perangkat akan menyalakan LED berwarna kuning yang berarti suhu ruangan masih dalam batas wajar. Dan apabila suhu ruangan server diatas 36°C maka akan menyalakan LED berwarna merah dan menyalakan piezo buzzer sebagai peringatan bahwa suhu tidak normal.
Platform thinger.io digunakan sebagai platform dalam monitoring suhu ini, hasil deteksi dari sensor DHT11 akan dikonversikan menjadi Celsius, Fahrenheit, dan Kelvin pada dashboard thinger.io.

### Pembagian Tugas 
- Sya'ban = Pembuatan rangkaian LED, Piezo Buzzer, dan DHT11
- Anhar = Konfigurasi program perangkat IoT dan koneksi perangkat dengan platfrom thinger.io
- Rangga = Konfigurasi pada platform thinger.io

### Komponen Yang Digunakan 
1. 1 buah ESP8266(NodeMCU) => perangkat utama yang mengontrol rangkaian
2. 1 buah Bread Board => sebagai dasar sirkuit elektronik sementara
3. 2 buah Kabel Jumper male to male => penghubung listrik pin Piezo Buzzer dan penyedia aliran ground
3. 3 buah Kabel Jumper male to female => penghubung listrik pin Piezo Buzzer dan penyedia aliran ground
5. 3 buah Resistor => penghambat tegangan listrik ke arah LED
6. 1 buah DHT11 => sensor untuk membaca suhu ruangan
7. 3 buah LED => sebagai indikator dari suhu ruangan
8. 1 buah Piezo Buzzer => sebagai peringatan jika suhu diatas tidak wajar (>36°C) 

### Board Schematic
1. Design Schematic
   ![design schematic](https://github.com/Anhar12/posttest3-praktikum-iot-unmul/assets/92861249/4720c412-5509-4069-bcee-01b25d06b23e)

2. Our Schematic
   ![WhatsApp Image 2024-03-21 at 16 02 14](https://github.com/Anhar12/posttest3-praktikum-iot-unmul/assets/92861249/6f0fa190-da84-48e6-a757-790550a97e41)

### Link Video
[Link Video Posttest 3 Kelompok 6](https://youtu.be/0H01u54BO3w)
