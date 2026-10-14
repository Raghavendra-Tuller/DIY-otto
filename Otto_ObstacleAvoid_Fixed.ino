//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Otto avoid obstacles with ultrasonic sensor - improved version
//-- Otto DIY invests time and resources providing open source code and hardware,
//-- please support by purchasing kits from https://www.ottodiy.com/
//-- Make sure to have installed all libraries: https://github.com/OttoDIY/OttoDIYLib
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <Otto.h>
Otto Otto;  //This is Otto!
//----------------------------------------------------------------------
#define LeftLeg 2
#define RightLeg 3
#define LeftFoot 4
#define RightFoot 5
#define Buzzer  13
#define Trigger 8 // ultrasonic sensor trigger pin
#define Echo 9 // ultrasonic sensor echo pin

#define OBSTACLE_DISTANCE_CM 15
#define ECHO_TIMEOUT_US 30000UL // ~5m max range, avoids blocking forever if no echo returns

long ultrasound() {
  long duration, distance;
  digitalWrite(Trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);

  duration = pulseIn(Echo, HIGH, ECHO_TIMEOUT_US);

  if (duration == 0) {
    // No echo received within timeout - treat as "nothing detected" (safe/far)
    return 999;
  }

  distance = duration / 58;
  return distance;
}

void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer); //Set the servo pins and Buzzer pin
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
}

void loop() {
  long distance = ultrasound();

  if (distance <= OBSTACLE_DISTANCE_CM) {
    Otto.sing(S_surprise);
    Otto.playGesture(OttoConfused);
    Otto.walk(2, 1000, -1); // BACKWARD x2
    Otto.turn(3, 1000, 1);  // LEFT x3
    delay(200);             // brief settle before re-checking distance
  } else {
    Otto.walk(1, 1000, 1);  // FORWARD x1
  }
}
