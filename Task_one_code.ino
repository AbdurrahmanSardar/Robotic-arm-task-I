#include <Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6;

void setup(){
motor1.attach(7);  
motor2.attach(8);  
motor3.attach(9);  
motor4.attach(10);  
motor5.attach(11);  
motor6.attach(12);    
}
void loop(){
motor1.write(90);  
motor2.write(90);  
motor3.write(90);  
motor4.write(90);  
motor5.write(90);  
motor6.write(90);  
delay(1000);  
motor1.write(0);  
motor2.write(0);  
motor3.write(0);  
motor4.write(0);  
motor5.write(0);  
motor6.write(0);
  delay(1000);  

}