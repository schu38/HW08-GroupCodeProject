#include <Servo.h>

int LightPin = A0;
int sensorValue = 0;
Servo myservo;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(LightPin, INPUT);
  Serial.begin(9600); // how often to return values to the serial monitor
  
  myservo.attach(5);  
  myservo2.attach(9);
  myservo3.attach(6);  
  myservo4.attach(10);

  myservo.write(100);  
  myservo2.write(100);
  myservo3.write(25);
  myservo4.write(25);
  
}

void loop() {

  sensorValue = analogRead(LightPin);
  Serial.println(sensorValue);
  
  for (pos = 50; pos <= 135; pos += 5) { // goes from 45 degrees to 135 degrees
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

  if (sensorValue > 650) {
    for (pos = 135; pos >= 25; pos -=5) {
      myservo.write(pos);
      myservo2.write(pos);
      delay(15);
    }

    for (pos = 25; pos <= 135; pos +=5) {
      myservo3.write(pos);
      myservo4.write(pos);
      delay(15);
    }
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
