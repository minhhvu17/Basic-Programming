// Write a function in C to find the greatest common divisor (gcd) of two positive integer
// numbers.
#include <stdio.h>
#include "Ex1n2.h"

int main (){
    int a, b;
    printf("Enter two numbers seprated by a spacebar: ");
    scanf("%d%d", &a, &b);
    printf("The greatest common divisor of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}