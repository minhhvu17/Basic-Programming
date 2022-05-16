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

    //Selection function
    int min_pos;
    int temp;
    for (int i = 0; i < n; i++){
        min_pos = i;
        for (int j = i+1; j < n;j++){
            if (arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min_pos];
        arr[min_pos]=temp;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}