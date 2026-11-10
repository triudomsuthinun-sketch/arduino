int BT = 17;
int BZ = 13;

//buzzer แบบใช้โค้ด analog จะเป็นเสียงถี่สูง ถ้าใช้ตัว HIGH, LOW จะเป็นเสียงกรึกถ้าเป็น ตัวเลข
//buzzer แบบใช้โค้ด digital จะเป็นเสียงกรึก ใช้ HIGH, LOW
// PWM  คือสัญญาณ analog

// ค่าความละเอียดของ ESP32 คือ 12bit
// there's 8bit (0-255 or 2^8),10bit (0-1024 or 2^10) and 12bit (0-4096 or 2^12)

void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);
  pinMode(BZ, OUTPUT);
    int count = 5;
    while (count <= 15) {
      digitalWrite(BT, LOW); // LED on
      analogWrite(BZ, 0-4096); // Buzzer off
      delay(1000);
      Serial.println(count);
      digitalWrite(BT, HIGH); // LED off
      analogWrite(BZ, 0); // Buzzer on
      delay(1000);
      count++;
}
}

// this code will make the serial monitor count when the led on the board is off
// the led is active low

void loop() {

}
