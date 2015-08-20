//
//  main.c
//  Head_First_C
//
//  Created by David Herscher on 7/29/15.
//  Copyright (c) 2015 David Herscher. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char card_name[3];
    int count = 0;
    int val = 0;
    
    while (card_name[0] != 'X') {
        
        puts("Enter the card_name: Or enter 'X' to end. ");
        scanf("%2s", card_name);
        
        switch (card_name[0]) {
                
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                val = 'X';
                puts("You have ended the program.\n");
                continue;
            default:
                val = atoi(card_name);
                if (val < 1 || val > 10) {
                    puts("Enter a valid face card or card value");
                    continue;
                }
                break;
        }/*end switch*/
        
        printf("The card value is %i\n", val);
        
        /* Check if the value is 3 to 6 */
        if ((val > 2) && (val < 7)) {
            puts("Count has gone up");
            count++;
            /* Otherwise check if the card was 10, J, Q or K */
        } else if (val == 10){
            puts("Count has gone down");
            count--;
        }
        
        printf("The current count is %i\n", count);

    }
    
    return 0;
}
