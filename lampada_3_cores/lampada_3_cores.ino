int velocidade = 1000;

void setup() {
  for(int i=0;i<6;i++){
      pinMode(i,OUTPUT);
    }
}

void loop() {
    for(int i=0;i<6;i++){
      digitalWrite(i,HIGH);
      delay(velocidade);
      digitalWrite(i,LOW);
      delay(velocidade);
    }
    velocidade = velocidade - 40;

}
