// Write a C program to sort an array of n elements in an increasing order (n is
// constant) by three different methods: bubble sort, insertion sort and selection sort.
#include <stdio.h>
int main (){
    // Input
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array you want to sort: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Insertion function 
    for (int i = 1; i < n;i++){
        int key = arr[i];
        for (int j = i-1; j >= 0; j--){
            if (arr[j] > key){
                arr[j+1] = arr[j];
                arr[j] = key;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}