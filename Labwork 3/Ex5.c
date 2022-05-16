// Write a C program to print Fibonnacci series upto n, n is an interger input from the
// keyboard.
#include <stdio.h>
int main (){
    int previous_number = 0;
    int current_number = 1;
    int next_number;
    int intermediary_number;
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The Fibonnancci series upto %d is: %d %d ", n, previous_number, current_number);
    while (1){
        intermediary_number = current_number;
        next_number = previous_number + current_number;
        current_number = next_number;
        previous_number = intermediary_number;
        if (next_number <= n){
            printf("%d ", next_number);
        }else{
            break;
        }  
    }
    return 0;
}