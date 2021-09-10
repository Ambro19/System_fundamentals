
/* 
 * File:   main.c
 * Author: Ambroise
 *
 * Created on September 8, 2021, 4:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int number1, number2; 
    double quotient, remainder;
    
    printf("Enter a value for number1: ");
    scanf("%d", &number1);
    
    printf("Enter a value for number2: ");
    scanf("%d", &number2);
    
    quotient = (number1) / (number2);
    
    remainder = (number1) % (number2);
    
    printf("The quotient is %.1lf\n", quotient);
    
    printf("The remainder is %.1lf", remainder);

    return (EXIT_SUCCESS);
}

