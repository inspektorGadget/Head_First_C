//
//  main.c
//  Head_First_C
//
//  Created by David Herscher on 7/29/15.
//  Copyright (c) 2015 David Herscher. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    
    if (card_name[0] == 'K') {
        val = 10;
    }else if (card_name[0] == 'Q') {
        val = 10;
    }else if (card_name[0] == 'J') {
        val = 10;
    }else if (card_name[0] == 'A') {
        val = 11;
    }
    
    else {
        val = atoi(card_name);
    }
    
    printf("The card valu is %i\n", val);
    return 0;
}
