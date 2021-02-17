
#include <Servo.h>
Servo servoMotor;       
int servoPin = 9;       
//int servoSpeed = 175;   
int servoSpeed = 180;
void setup() {
  Serial.begin(9600);       
  servoMotor.attach(servoPin);  
} 
void loop() { 
  servoMotor.write(servoSpeed);
  
}
