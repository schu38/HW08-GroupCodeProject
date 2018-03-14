#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//make four new servos
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(5);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(9);
  myservo3.attach(6);  // attaches the servo on pin 6 to the servo object 3
  myservo4.attach(10);

 myservo.write(25);  // attaches the servo on pin 9 to the servo object
  myservo2.write(25);
   myservo3.write(25);
   myservo4.write(25);
  
}

void loop() {
  for (pos = 25; pos <= 135; pos += 5) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    myservo.write(pos);
    myservo2.write(pos);
    // tell servo to go to position in variable 'pos'
    // waits 15ms for the servo to reach the position
  }
  for (pos = 25; pos <= 135; pos += 5) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    myservo4.write(pos);
    // tell servo to go to position in variable 'pos'
    // waits 15ms for the servo to reach the position
  }
  for (pos = 25; pos <= 135; pos += 5) { // goes from 45 degrees to 135 degrees
    // in teps of 1 degree
    myservo3.write(pos);
    // tell servo to go to position in variable 'pos'
    // waits 15ms for the servo to reach the position
  }
  
  for (pos = 135; pos >= 25; pos -= 5) { // goes from 135 degrees to 45 degre
    myservo4.write(pos); 
    myservo3.write(pos); 
    delay(30);
    }
    
  for (pos = 135; pos >= 25; pos -= 5) { // goes from 135 degrees to 45 degrees
    myservo.write(pos);
    myservo2.write(pos); 
    delay(30);
    }

    /*
   for (pos = 135; pos >= 25; pos -= 1) { // goes from 135 degrees to 45 degrees
    myservo.write(pos);
    myservo2.write(pos);
    // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
   }
  /*
  for (pos = 225; pos >= 45; pos -= 1) { // goes from 135 degrees to 45 degrees
    myservo.write(pos);
    myservo2.write(pos);
    // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  */
}
