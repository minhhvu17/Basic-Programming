// Write a C program to find the minimum and maximum number in a given series
// of n numbers stored in a static or dynamic (from the keyboard) array
#include <stdio.h>
int main (){
    int n;
    printf("The length of array you want: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<=n-1; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i<=n-1; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max of the series is %d and min of the series is %d", max, min);
    return 0;    
}