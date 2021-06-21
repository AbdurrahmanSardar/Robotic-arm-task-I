#include <Servo.h>
Servo motor1;    //Declare all six motors and name this as motor1 to motor6
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6;

void setup(){
motor1.attach(7);  //setup eacth motor to a signal portpin from 7 to 12
motor2.attach(8);  
motor3.attach(9);  
motor4.attach(10);  
motor5.attach(11);  
motor6.attach(12);    
}
void loop(){
motor1.write(90);  // move all motors to angle 90 degrees
motor2.write(90);  
motor3.write(90);  
motor4.write(90);  
motor5.write(90);  
motor6.write(90);  
delay(1000);      // wait for 0.1 sec
motor1.write(0);  // move all motors to angle zero degrees
motor2.write(0);  
motor3.write(0);  
motor4.write(0);  
motor5.write(0);  
motor6.write(0);
  delay(1000);  

}
