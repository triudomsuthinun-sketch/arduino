int age = 16;
float temperature = 35.5;
char grade = 'A';
bool ledStatus = true;
int counter = 0;
const int MAX_SCORE = 150;
const float PI_VALUE = 3.14159;

void setup() {
    Serial.begin(115200);

    Serial.println("=== Variable Example ===");

    Serial.print("Age = ");
    Serial.println(age);

    Serial.print("Temperature = ");
    Serial.println(temperature);

    Serial.print("Grade = ");
    Serial.println(grade);

    Serial.print("LED Status = ");
    Serial.println(ledStatus);

    Serial.print("Maxinum Score = ");
    Serial.println(MAX_SCORE);

    Serial.print("PI = ");
    Serial.println(PI_VALUE);
}

void loop() {
    counter = counter + 1;

    Serial.print("Counter = ");
    Serial.println(counter);

    delay(1000);
}