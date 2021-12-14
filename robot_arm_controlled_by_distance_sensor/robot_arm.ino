
#include <Servo.h>

Servo s;
const int SERVO_PIN = 4;
const int TRIG_PIN = 3;
const int ECHO_PIN = 2;
const int DISTANCE_TO_PICK = 20;
long duration;
int distance;
int globalServoPosition = 0;
 
void setup (){
  s.attach(SERVO_PIN);
  s.write(0);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600); // Starts the serial communication
}

void pick() {
    while(globalServoPosition < 180) {
      s.write(globalServoPosition);
      globalServoPosition++;
    }
}

void drop() {
    while(globalServoPosition >= 0) {
      s.write(globalServoPosition);
      globalServoPosition--;
    }
}

int getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print("globalPos: ");
  Serial.println(globalServoPosition);
  return distance;
}

void loop(){
  int totalDistance = getDistance();

  if(totalDistance < DISTANCE_TO_PICK ) {
    pick();
  }else{
    drop();
  }
} 