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
```

## 📖 Cara Menggunakan Modul
1. 👶 Pemula: Mulai dari Bab 1 secara berurutan
2. 🚶 Berpengalaman: Langsung ke bab yang dibutuhkan
3. 🔧 Praktikum: Ikuti contoh kode dan project
4. 🔬 Eksperimen: Modifikasi kode sesuai kebutuhan

## 🔧 Hardware yang Disarankan
### Board Arduino
- Arduino Uno R3 (Recommended untuk pemula)
- Arduino Nano
- Arduino Mega 2560

### Komponen Dasar
- LED berbagai warna
- Resistor (220Ω, 1kΩ, 10kΩ)
- Potensiometer 10kΩ
- Push button
- Breadboard dan kabel jumper

### Sensor dan Aktuator
- LDR (Light Dependent Resistor)
- Sensor Ultrasonik HC-SR04
- Sensor Suhu DHT11/DHT22
- Motor DC kecil
- Servo Motor SG90
- LCD 16x2 dengan I2C
- Buzzer

## 🌐 Simulasi Online
Modul ini mendukung simulasi online melalui:
- 🔧 Tinkercad Circuits
- ⚡ Wokwi Arduino Simulator

📝 License
Modul ini dilisensikan di bawah MIT License.

📞 Support
📧 Email: [prcipb@gmail.com]
💬 Whatsapp: [081617073448]

🏆 Credits
Dikembangkan oleh Physics Robotic Club | Fisika IPB.
