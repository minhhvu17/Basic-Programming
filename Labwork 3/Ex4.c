// Write a C program to enter a positive number and calculate product of digits of the
// number using modulus operator % and while loop. 
#include <stdio.h>
int main (){
    int n;
    int check = 1;
    int product = 1;
    int remainder;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    int number = n;
    while (check == 1){
        remainder = n % 10;
        n = (n - remainder)/10;
        product *= remainder;
        if (n==0){
            check = 0;
        }
    }
    printf("The product of the digit(s) of %d is: %d", number, product);
    return 0;
}