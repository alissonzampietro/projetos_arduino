const int analogInPin = A0;  // pino de entrada analógica do potentiometer ligado em A0
 
int sensorValue = 0;        // variável que vai receber o valor da leitura do potenciometro
 
void setup()
{
  Serial.begin(9600);   // inicializa a comunicação serial a 9600 bps
}
 
void loop() {
  sensorValue = analogRead(analogInPin);   // lê o valor da porta analógia e guarda na variável        
        
 
  // print the results to the serial monitor:
  Serial.print("sensor = " );                      
  Serial.println(sensorValue);        
 
  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(1000);                    
}
