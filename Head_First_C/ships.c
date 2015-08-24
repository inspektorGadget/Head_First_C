//  Scratch.c
//  Head_First_C
//
//  Created by David Herscher on 7/29/15.
//  Copyright (c) 2015 David Herscher. All rights reserved.
//

#include "Scratch.h"

//functions

void go_south_east(int *lat, int *lon) {
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main() {

  int latitude = 32;
  int longitude = -64;

  go_south_east(&latitude, &longitude);

  printf("Avast! Now at: [%i %i]\n", latitude, longitude);

  return 0;

}
//stop
