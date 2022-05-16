// Write a C program to find a factorial of n, n is an interger input from the keyboard. 
#include <stdio.h>
// int main (){
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     long int factorial = 1;
//     if (n==0){
//         printf("The factorial of %d is 1",n);
//     }
//     else if (n > 0){
//         for (long int i = 1; i <=n; i++){
//             factorial = factorial * i;
//         }
//     }
//     printf("The factorial of %d is %ld", n, factorial);
//     return 0;
// }

long long factorial(int i){
    if(i <= 1){
        return 1;
    }
    else{
        return i * factorial(i - 1);
    }
}

int main (){
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("%lld", factorial(i));
    return 0;
}

