// Write a C function to enter a positive integer number and calculate n! using recursive
// function.
#include <stdio.h>
#include "Ex4.h"

int main (){
    int a;
    printf ("Enter a positive integer: ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}