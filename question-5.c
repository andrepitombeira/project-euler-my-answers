//
//  question-5.c
//  
//
//  Created by Andre Pitombeira on 25/08/15.
//
//

/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int main(void) {
    int n = 2520;
    int i;
    int j;
    int isDivisible;
    int num = 0;
    
    for (i = 1;; i++) {
        isDivisible = 1;
        
        for (j = 1; j <= 20; j++) {
            if (i % j != 0) {
                isDivisible = 0;
                break;
            }
        }
        
        if (isDivisible == 1) {
            num = i;
            break;
        }
    }
    
    printf("Number is: %d \n", num);
}
