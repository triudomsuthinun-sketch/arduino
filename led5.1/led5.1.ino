#define WIFI 2
#define BT 17
#define NTP 15
#define IOT 12

void setup() {

Serial.begin(9600);

  pinMode(BT, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(IOT, OUTPUT);

  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);

    }

void loop() {

  digitalWrite(BT, LOW);
  delay(500);
  digitalWrite(BT, HIGH);

  digitalWrite(WIFI, LOW);
  delay(500);
  digitalWrite(WIFI, HIGH);

  digitalWrite(NTP, LOW);
  delay(500);
  digitalWrite(NTP, HIGH);

  digitalWrite(IOT, LOW);
  delay(500);
  digitalWrite(IOT, HIGH);

  //-------------------------

  digitalWrite(IOT, LOW);
  delay(500);
  digitalWrite(IOT, HIGH);

  digitalWrite(NTP, LOW);
  delay(500);
  digitalWrite(NTP, HIGH);

  digitalWrite(WIFI, LOW);
  delay(500);
  digitalWrite(WIFI, HIGH);

  digitalWrite(BT, LOW);
  delay(500);
  digitalWrite(BT, HIGH);
      
}