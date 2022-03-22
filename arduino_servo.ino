// This rotates the servo back and forth.

// Created by: Daria Bernice Calitis
// Created on: March 2022.


#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(2);
  servo.write(0); // changes the angle to zero
}

void loop()
{
  int angle;
 
  // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  }
  
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}
