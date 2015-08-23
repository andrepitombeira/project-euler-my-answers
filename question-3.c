//
//  question-3.c
//  
//
//  Created by Andre Pitombeira on 22/08/15.
//
//

/*
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>


int main(void) {
    long num = 600851475143;
    long factor = 3;
    long lastFactor;
    
    if (num % 2 == 0) {
        num = num/2;
        lastFactor = 2;
        while (num % 2 == 0) {
            num = num/2;
        }
    } else {
        lastFactor = 1;
    }
    
    while (num > 1) {
        if (num % factor == 0) {
            lastFactor = factor;
            num = num/factor;
            while (num % factor == 0) {
                num = num/factor;
            }
        }
        
        factor = factor + 2;
    }
    
    printf("%ld\n", lastFactor);
}


