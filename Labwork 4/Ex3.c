// Write two C functions that compute f(x)=2.5x and g(x,y)=xy
#include<stdio.h>
#include "Ex3.h"
int main(){
    float a, b;
    printf("Enter x and y respectively: ");
    scanf("%f%f",&a , &b);
    printf("The solution of f(x)=2.5x with x = %.2f is %.2f\n", a, f(a));
    printf("The solution of g(x,y)=xy with x = %.2f and y = %.2f is %.2f", a, b, g(a,b));
    return 0;
}