# 1.5 Program Pertama (Blink LED)

## 📖 Daftar Isi
- [Kode Program](blink-led.ino)
- [Skematik](circuit-diagram.png)

## 🎯 Tujuan Pembelajaran
- Memahami struktur program Arduino
- Mampu membuat program Blink LED
- Memahami fungsi setup() dan loop()

## 🔧 Komponen yang Diperlukan
- Arduino Board
- LED
- Resistor 220 ohm
- Breadboard
- Kabel jumper

## 📚 Teori

### Struktur Program Arduino
Setiap program Arduino memiliki dua fungsi utama:

1. **setup()** - Dieksekusi sekali saat startup
2. **loop()** - Dieksekusi berulang-ulang

### Fungsi-fungsi Dasar
- `pinMode(pin, mode)` - Mengatur mode pin
- `digitalWrite(pin, value)` - Menulis nilai digital
- `delay(ms)` - Menunda eksekusi

## 🔧 Praktikum

### Skematik Rangkaian
- Arduino Pin 13 → Resistor 220Ω → LED Anode (+)
- LED Cathode (-) → GND

### Kode Program
```cpp
// Program Blink LED - Program pertama Arduino
// LED terhubung ke pin digital 13

// Deklarasi konstanta
const int LED_PIN = 13;

void setup() {
  // Inisialisasi pin 13 sebagai OUTPUT
  pinMode(LED_PIN, OUTPUT);
  
  // Inisialisasi komunikasi serial
  Serial.begin(9600);
  Serial.println("Program Blink LED Started");
}

void loop() {
  // Nyalakan LED
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON - Pin 13 HIGH");
  
  // Tunggu 1 detik (1000 milidetik)
  delay(1000);
  
  // Matikan LED
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF - Pin 13 LOW");
  
  // Tunggu 1 detik
  delay(1000);
}
```

## 🔬 Eksperimen
### Variasi 1: Ubah Waktu Delay
```cpp
...

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);    // 0.5 detik
  digitalWrite(LED_PIN, LOW);
  delay(500);    // 0.5 detik
}
```

### Variasi 2: Multiple LED
```cpp
const int LED1 = 13;
const int LED2 = 12;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(500);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(500);
}
```

### Variasi 3: PWM untuk Kecerahan
```cpp
...
void loop() {
  for(int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(LED_PIN, brightness);
    delay(10);
  }
  
  for(int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(LED_PIN, brightness);
    delay(10);
  }
}
```

## 🐛 Troubleshooting
|Masalah	|Penyebab	|Solusi|
|---------|----------|---------|
|LED tidak menyala	|Polaritas terbalik	|Periksa anode/cathode|
|LED terlalu terang	|Tidak pakai resistor	|Tambah resistor 220Ω|
|Program tidak upload	|Port salah	|Periksa Tools → Port|

## ✅ Checklist Penyelesaian
- Rangkaian sesuai skematik
- Kode program berhasil diupload
- LED berkedip dengan interval 1 detik
- Serial monitor menampilkan status

## 💡 Tips Penting
- Pin 13 sudah ada LED built-in (bisa tanpa LED external)
- Gunakan resistor untuk LED external
- Perhatikan polaritas LED
- Test dengan Serial Monitor untuk debugging

## 🎉 Selamat! Anda telah menyelesaikan program Arduino pertama!
