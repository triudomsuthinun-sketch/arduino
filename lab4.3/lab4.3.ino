int BT = 17;

void setup() {
    Serial.begin(115200);
    pinMode(BT, OUTPUT);

    for (int i = 0; i < 10; i++) {

        digitalWrite(BT, HIGH);
        delay(500);

        digitalWrite(BT, LOW);
        delay(500);

    for(int countu = 1; countu <= 10; countu++) {
    if(countu == 5){
      break;
    }
    Serial.println(countu);
    }
    Serial.println("-------------line-------------");
    for(int countd = 10; countd >= 0; countd--) {
       if(countd == 7){
      continue;
    }
    Serial.println(countd);
    }
    Serial.println("-------------line-------------");
}
}

// ความแตกต่างของ continue และ break คือ
// continue ห้ามแล้วนับต่อ
// break ห้ามแล้วจะไม่นับต่อ
void loop() {
  // put your main code here, to run repeatedly:

}