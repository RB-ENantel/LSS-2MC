#include "LSS-2MC.h"

LSS2MC my2MC;
int motSpeed; 

void setup() {
	my2MC.arm();
}

void loop() {
  // Motor on output 1 & 2
  for (motSpeed = 0; motSpeed <= 255; motSpeed += 1) {
    my2MC.speed(1, 1, motSpeed);
    delay(5);
  }
  delay(500);
  for (motSpeed = 255; motSpeed >= 0; motSpeed -= 1) {
    my2MC.speed(1, 1, motSpeed);
    delay(5);
  }
  delay(1000);
  for (motSpeed = 0; motSpeed <= 255; motSpeed += 1) {
    my2MC.speed(1, 2, motSpeed);
    delay(5);
  }
  delay(500);
  for (motSpeed = 255; motSpeed >= 0; motSpeed -= 1) {
    my2MC.speed(1, 2, motSpeed);
    delay(5);
  }
  my2MC.disarm();
}
