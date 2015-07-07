const int analogInPin = A0;  // pino de entrada analógica do potentiometer ligado em A0
 
int sensorValue = 0;        // variável que vai receber o valor da leitura do potenciometro
 
void setup()
{
  pinMode(analogInPin,INPUT);
  for(int i=2;i<12;i++){
      pinMode(i,OUTPUT);
  }
  Serial.begin(9600);   // inicializa a comunicação serial a 9600 bps
}
 
void loop() {     
 
  for(int i=2;i<12;i++){
      sensorValue = analogRead(analogInPin);   // lê o valor da porta analógia e guarda na variável
      digitalWrite(i,HIGH);
      delay(sensorValue);
      digitalWrite(i,LOW);
      delay(sensorValue);
      Serial.println(sensorValue);
  }                    
}
