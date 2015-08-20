//
//  Scratch.c
//  Head_First_C
//
//  Created by David Herscher on 7/29/15.
//  Copyright (c) 2015 David Herscher. All rights reserved.
//

#include "Scratch.h"
int main() {
    
    int x = 0;
    int y = 0;
    
    while (x < 5) {
        
        y = y + 2;
        if (y > 4) {
            y = y - 1;
        }
        printf("%i%i \n", x, y);
        x = x + 1;
    }
    return 0;

}