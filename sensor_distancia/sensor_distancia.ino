const int trigPin = 12, echoPin = 13, perto = 8, longe = 7;
int flag;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(longe, OUTPUT);
  pinMode(perto, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  unsigned long duracao = pulseIn(echoPin, HIGH);
  int distancia = duracao / 58;
  Serial.print("Distancia em centimetros: ");
  Serial.println(distancia);
  if (distancia < 110 ) {
    digitalWrite(flag, LOW);
    flag = perto;
  } else {
    digitalWrite(flag, LOW);
    flag = longe;
  }
  digitalWrite(flag, HIGH);
}
