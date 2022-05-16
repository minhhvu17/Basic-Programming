// Write a C program to sort an array of n elements in an increasing order (n is
// constant) by three different methods: bubble sort, insertion sort and selection sort.
#include <stdio.h>
// void swap(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;

// }

int main (){
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array you want to sort: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int check = 0;
    int temp;
    for (int i = 0; i < n - 1; i++){
        check = 0;
        for (int j = 0; j < n-1-i; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                check = 1;
            }
        }
        if (check == 0){
            break;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}