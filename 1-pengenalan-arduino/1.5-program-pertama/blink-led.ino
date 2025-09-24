/**
 * Program Blink LED - Program Pertama Arduino
 * 
 * Deskripsi: Program untuk menyalakan dan mematikan LED secara bergantian
 * Pin: LED terhubung ke pin digital 13
 * 
 * @author Nama Anda
 * @version 1.0
 * @date 2024
 */

// Deklarasi konstanta untuk pin LED
const int LED_PIN = 13;

/**
 * Fungsi setup() - Dieksekusi sekali saat Arduino mulai
 */
void setup() {
  // Inisialisasi pin 13 sebagai OUTPUT
  pinMode(LED_PIN, OUTPUT);
  
  // Inisialisasi komunikasi serial
  Serial.begin(9600);
  Serial.println("Program Blink LED Started");
}

/**
 * Fungsi loop() - Dieksekusi berulang-ulang
 */
void loop() {
  // Nyalakan LED
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  
  // Tunggu 1 detik (1000 milidetik)
  delay(1000);
  
  // Matikan LED
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  
  // Tunggu 1 detik
  delay(1000);
}

/**
 * Catatan:
 * - Pin 13 sudah ada LED built-in pada kebanyakan board Arduino
 * - Untuk LED external, gunakan resistor 220Ω
 * - Delay() menghentikan eksekusi program sementara
 */
