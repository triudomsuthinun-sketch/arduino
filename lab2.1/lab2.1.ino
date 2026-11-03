int age = 0;
const int BT = 17;
const int BUTTON_PIN = 4;
int buttonState = HIGH;

void setup() {
  pinMode(BT, OUTPUT);
    Serial.begin(115200);
    Serial.println("Please enter your age:");
    digitalWrite(BT,HIGH);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
    if (Serial.available() > 0) {
      digitalWrite(BT,LOW);
        age = Serial.parseInt();

        Serial.print("Your age is: ");
        Serial.println(age);

        Serial.println("Please enter your age again:");
    }
    {
    buttonState = digitalRead(BUTTON_PIN);

    Serial.print("Button State = ");
    Serial.println(buttonState);

    delay(200);
}
}