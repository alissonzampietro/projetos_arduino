int valor,barulho = 8;
void setup() {
  Serial.begin(9600);
  pinMode(barulho,OUTPUT);

}

void loop() {
  valor = analogRead(A0);
  if(valor > 400){
     while(1 > 0){
        digitalWrite(barulho,HIGH);
        delay(500);
        digitalWrite(barulho,LOW);
        delay(500);
     } 
  }
  Serial.println(valor);
  delay(1000);

}
