//
//  Scratch.c
//  Head_First_C
//
//  Created by David Herscher on 7/29/15.
//  Copyright (c) 2015 David Herscher. All rights reserved.
//

#include "Scratch.h"
int main() {
    
    int val = 0;
    
    switch (card_name[0]) {
            
        case 'K':
        case 'Q';
        case 'J';
            val = 10;
            break;
        case 'A';
            val = 11;
            break
            
        default:
            val = atoi(card_name);
            break;
    }
    
    return 0;

}
