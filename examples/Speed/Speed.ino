#include "LSS-2MC.h"

LSS2MC my2MC;
int motSpeed = 255;

void setup() {
	my2MC.arm();
}

void loop() {
  my2MC.speed(1, 1, motSpeed);
  delay(1000);
  my2MC.stop(1);
  delay(1000);
}
