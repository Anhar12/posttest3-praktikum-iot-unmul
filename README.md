# POSTTEST 2 - PRAKTIKUM - IoT - UNMUL

Kelompok 6 Kelas B:
- 2109106051 - Reihan Al Sya'ban
- 2109106081 - Anhar Khoirun Najib
- 2109106104 - M. Rangga Yaqub Wijaya

## Rangkaian Monitoring Suhu Ruangan Server Menggunakan DHT11, LED, dan Piezo Buzzer Menggunakan Platform thinger.io
### Deskripsi 
Perangkat ini menggunakan NodeMCU yang akan memonitoring suhu pada ruangan server menggunakan DHT11, kemudian akan menyalakan LED dan Piezo Buzzer dalam kondisi tertentu

### Metode IoT
Perangkat ini dilengkapi dengan DHT11 sebagai sensor yang akan membaca suhu ruangan, apabila suhu ruangan dibawah 30°C maka perangkat akan menyalakan LED berwarna hijau yang berarti suhu dalam kondisi normal. Kemudian apabila suhu ruangan diantara 30°C hingga 36°C maka perangkat akan menyalakan LED berwarna kuning yang berarti suhu ruangan masih dalam batas wajar. Dan apabila suhu ruangan server diatas 36°C maka akan menyalakan LED berwarna merah dan menyalakan piezo buzzer sebagai peringatan bahwa suhu tidak normal.

### Pembagian Tugas 
- Sya'ban = Pembuatan rangkaian LED, Piezo Buzzer, dan Button
- Anhar = Konfigurasi program rangkaian dan monitoring dengan WEBSERVER

### Komponen Yang Digunakan 
1. 1 buah ESP8266(NodeMCU)
2. 1 buah Bread Board
3. 7 buah Kabel Jumper
4. 1 buah Resistor
5. 1 buah LED
6. 1 buah Piezo Buzzer
7. 3 buah Button

### Board Schematic
1. Design Schematic
   ![design schematic](https://github.com/Anhar12/posttest2-praktikum-iot-unmul/assets/92861249/ca6226eb-5e04-4d36-b596-f5dbe443c90a)

2. Our Schematic
   ![skema board](https://github.com/Anhar12/posttest2-praktikum-iot-unmul/assets/92861249/bfd9a8bd-1825-4a00-9bfd-d73f61474ead)

### Link Video
https://youtu.be/9oNxr5nAnV8?si=2FOOoRKm8BYiTS43
