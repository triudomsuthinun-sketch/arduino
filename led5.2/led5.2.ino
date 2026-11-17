int led[4] = {17, 2, 15, 12};

void setup() {
  Serial.begin(115200);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);

}

void loop() {

  digitalWrite(led[0], LOW);
  delay(200);
  digitalWrite(led[0], HIGH);

  digitalWrite(led[1], LOW);
  delay(200);
  digitalWrite(led[1], HIGH);

  digitalWrite(led[2], LOW);
  delay(200);
  digitalWrite(led[2], HIGH);

  digitalWrite(led[3], LOW);
  delay(200);
  digitalWrite(led[3], HIGH);

//-------------------------------------------------

  digitalWrite(led[0], HIGH);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  delay(200);

  digitalWrite(led[0], LOW);
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  delay(200);

//-------------------------------------------------

  digitalWrite(led[3], LOW);
  delay(200);
  digitalWrite(led[3], HIGH);

  digitalWrite(led[2], LOW);
  delay(200);
  digitalWrite(led[2], HIGH);

  digitalWrite(led[1], LOW);
  delay(200);
  digitalWrite(led[1], HIGH);

  digitalWrite(led[0], LOW);
  delay(200);
  digitalWrite(led[0], HIGH);
}
