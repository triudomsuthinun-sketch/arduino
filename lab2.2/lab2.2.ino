const int BT = 17;
const int WIFI = 2;
const int NTP = 15;
const int IOT = 12;

void setup() {
  Serial.begin(115200);
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
  if(Serial.read() == 'a'){
    digitalWrite(BT, LOW);
  }

  if(Serial.read() == 's'){
    digitalWrite(WIFI, LOW);
  }

  if(Serial.read() == 'n'){
    digitalWrite(NTP, LOW);
  }

  if(Serial.read() == 'i'){
    digitalWrite(IOT, LOW);
  }
}