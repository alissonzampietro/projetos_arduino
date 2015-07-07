int inicio = 8,fim = 13,posicaoInicial = 8, quantidade = 6,lado = 0,velocidade;
void setup() {
  for(int i = posicaoInicial;i<(posicaoInicial+quantidade);i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);

}

void loop() {
  if(lado == 0){
    for(int i = posicaoInicial;i<fim;i++){
      velocidade = analogRead(A3);
      digitalWrite(i,HIGH);
      botao(i);
      delay(velocidade);
      digitalWrite(i,LOW);
    }
    posicaoInicial = fim;
    lado = 1;
  }else{
    for(int i = posicaoInicial;i>inicio;i--){
      velocidade = analogRead(A3);
      digitalWrite(i,HIGH);
      botao(i);
      delay(velocidade);
      digitalWrite(i,LOW);
    }
    posicaoInicial = inicio;
    lado = 0;
  }
  

}



void botao(int led){
  Serial.println(analogRead(A0));
  if(analogRead(A0) < 10){
    int velocidadePisca = 1000;
    for(int o = 0;o<10;o++){
       digitalWrite(led,HIGH);
       delay(velocidadePisca);
       digitalWrite(led,LOW);
       delay(velocidadePisca); 
       velocidadePisca = velocidadePisca - 100;
    }  
  } 
}
