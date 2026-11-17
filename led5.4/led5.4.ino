#define LDR_PIN 36
const int SAMPLE_COUNT = 5;
int lightData[SAMPLE_COUNT];
void setup() {
    Serial.begin(115200);
}

void loop() {
    int sum = 0;
    // อ่านค่า LDR จำนวน 5 ครั้ง
    for (int i = 0; i < SAMPLE_COUNT; i++) {
        lightData[i] = analogRead(LDR_PIN);
        sum += lightData[i];
        delay(200);
    }

    // คำนวณค่าเฉลี่ย
    float average = (float)sum / SAMPLE_COUNT;
    Serial.println("LDR Data:");
    for (int i = 0; i < SAMPLE_COUNT; i++) {
        Serial.println(lightData[i]);
    }

    Serial.print("Average = ");
    Serial.println(average);
    delay(1000);
}