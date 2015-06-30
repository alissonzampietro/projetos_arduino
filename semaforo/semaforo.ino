int led = 4, // variável que representa as portas digitais utilizadas
    flag = 0, // variável flag para saber quando mudar as luzes
    pedestrePassa = 2,
    pedestreNaoPassa = 1,
    delays[] = {10000,4000,10000}; // array com tempos dos leds do semáforo
void setup() {
  // informa quais portas serão usadas
  pinMode(pedestreNaoPassa,OUTPUT);
  pinMode(pedestrePassa,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  if(flag == 0){
    digitalWrite(pedestrePassa,LOW);
    digitalWrite(pedestreNaoPassa,LOW);
    digitalWrite(12,HIGH);
     for(int i = 0;i<5;i++){
      digitalWrite(pedestreNaoPassa,HIGH);
      delay(1000);
      digitalWrite(pedestreNaoPassa,LOW);
      delay(1000);
    }
    digitalWrite(pedestreNaoPassa,HIGH);
    digitalWrite(12,LOW);
  }
  
  digitalWrite(led,HIGH); // liberamos energia para o pino representado na variável LED
   if(flag == 2){
    delay(800);
    digitalWrite(pedestreNaoPassa,LOW);
    digitalWrite(pedestrePassa,HIGH);
  }
  if(flag == 1){
    digitalWrite(7,HIGH);
  }
  delay(delays[flag]); // utilizamos a posição do flag para localizar quanto tempo deve demorar para a luz apagar
  digitalWrite(led,LOW); // cortamos energia para o pino representado na variável LED
  //  realizamos cálculos para que se possa mudar as luzes do led
  if(flag<2){
    flag = flag + 1;
    led = led + 4;
  }else{
    flag = 0;
    led = led - 8;
  }
}
