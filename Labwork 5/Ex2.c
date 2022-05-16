// Write a C program to enter a positive integer number n and calculate the sum of
// even and odd numbers from 1 to n.
#include <stdio.h>
int main(){
    int n;
    int odd_sum = 0; int even_sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            even_sum += i;
        }else{
            odd_sum += i;
        }
    }
    printf("The sum of even numbers from 1 to %d is %d\n", n, even_sum);
    printf("The sum of odd numbers from 1 to %d is %d\n", n, odd_sum);
    return 0;
}
