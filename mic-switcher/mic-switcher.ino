void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  digitalWrite(13, HIGH);
  delay(1000);
  Serial.write(1);
}

int cnt = 0;
bool prev = HIGH;
const int BOUNCE_TIME = 10;

void loop() {
  // put your main code here, to run repeatedly:
  bool sw = digitalRead(2);

  if (sw != prev) 
  {
    cnt++;
  } else {
    cnt = 0;
  }

  if (cnt > BOUNCE_TIME) {   
    digitalWrite(13, sw);
    Serial.write(sw);
    prev = sw;
  }

  delay(5);
}
