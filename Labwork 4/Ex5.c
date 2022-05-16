// Write two C functions to calculate x^n, n and x are input from the keyboard by the normal
// function and recursive function.
#include <stdio.h>
#include "Ex5.h"

int main (){
    int x, n;
    printf ("Enter the value of x and n to caculate x^n: ");
    scanf("%d%d", &x, &n);
    printf("The value of x^n which is %d^%d is %d", x, n, power(x,n));
    return 0;
}