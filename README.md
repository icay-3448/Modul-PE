# Modul Pembelajaran Mikrokontroller Arduino

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-blue.svg)

Modul komprehensif untuk belajar pemrograman mikrokontroller Arduino dari dasar hingga advanced.

## 📚 Daftar Isi

1. [Pengenalan Arduino](1-pengenalan-arduino/README.md)
2. [Pemrograman Umum Arduino](2-pemrograman-umum/README.md)
3. [Sensor dan Aktuator](3-sensor-dan-aktuator/README.md)
4. [Contoh Project](contoh-project/README.md)

## 🎯 Tujuan Pembelajaran

- Memahami konsep dasar mikrokontroller dan Arduino
- Menguasai pemrograman Arduino dengan bahasa C++
- Mampu mengintegrasikan berbagai sensor dan aktuator
- Dapat mengembangkan project IoT dan embedded systems

## 🛠️ Prasyarat

- Dasar-dasar elektronika
- Pemahaman dasar pemrograman (opsional)
- Arduino Board (Uno, Nano, atau compatible)
- Komputer dengan Arduino IDE terinstall

## 🚀 Mulai Cepat

### Instalasi Arduino IDE

1. Download Arduino IDE dari [arduino.cc](https://www.arduino.cc/en/software)
2. Install sesuai sistem operasi Anda
3. Hubungkan Arduino ke komputer via USB
4. Buka contoh program Blink LED

### Program Pertama

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
