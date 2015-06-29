int led = 4, // variável que representa as portas digitais utilizadas
    flag = 0, // variável flag para saber quando mudar as luzes
    delays[] = {20000,4000,10000}; // array com tempos dos leds do semáforo
void setup() {
  // informa quais portas serão usadas
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH); // liberamos energia para o pino representado na variável LED
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
