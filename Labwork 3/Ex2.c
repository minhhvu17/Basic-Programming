// Write a C program to enter a natural number n (n > 1), and find all the prime
// numbers from 1 to n. 
#include<stdio.h>
#include<math.h>
int main (){
    int n;
    int count;
    printf("Enter the number you want to find the prime numbers from 1 to it: ");
    scanf("%d", &n);
    printf("The prime numbers from 1 to %d are: ", n);
    for (int i = 1; i<=n;i++){
        count = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                count ++;
            }
        }
        if (count == 2){
            printf("%d ", i);
        }
    }
    return 0;
}