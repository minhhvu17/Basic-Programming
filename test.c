#include <stdio.h>
int main (){
    int arr[1000];
    for (int i = 0; i< 3; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 3; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("Min is %d\n", min);
    printf("Max is %d", max);
    return 0;
}