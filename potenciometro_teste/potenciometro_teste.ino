int valor;
void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  valor = analogRead(A0);
  Serial.println(valor);
  digitalWrite(3,HIGH);
  delay(valor);
  digitalWrite(3,LOW);
  delay(valor);
  // put your main code here, to run repeatedly:

}
