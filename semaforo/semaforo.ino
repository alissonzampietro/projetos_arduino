int led = 4, flag = 0,delays[] = {20000,4000,10000};
void setup() {
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(delays[flag]);
  digitalWrite(led,LOW);
  if(flag<2){
    flag = flag + 1;
    led = led + 4;
  }else{
    flag = 0;
    led = led - 8;
  }
}
