// To enable word wrap -> Alt + Z 

/*
  This program will help you understand how to control servos. Read through the program and comment with enough detail explaining everything that is going on. Please comment line by line with a quick summary before each function. 

  Try this code to see what it does.
*/

#include <Arduino.h>          // Loading Arduino library
#include <Servo.h>            // Loading Servo Library

#define Servo_Pin 1           // Defining a Variable to call Pin 1

Servo s;

int radians_to_degrees(double);

/**
 * Sets the servo pin to output
 * Sets servo angle to 90
 */
void setup() 
{ 
  pinMode(Servo_Pin, OUTPUT); // Set servo pin to output
  s.attach(Servo_Pin);        // Attaches the servo variable to the servo pin
  s.write(90);  // Set servo to mid-point
  delay(500);                 // Delay for half a second
} 
/*
  Next write code that makes the Servo oscillate from 0 - 2pi/3 radians every 5 seconds.
*/ 

/**
 * Loop back and forth between an angle of 0 and 120 every 5 seconds
 */
void loop() {
  s.write(0);
  delay(2500);
  s.write(radians_to_degrees(2 * PI / 3));
  delay(2500);
}

/**
 * Converts radian angle to degree value
 */
int radians_to_degrees(double rad) {
  double angle = rad * 180 / PI + .5;
  return (int) angle;
}
