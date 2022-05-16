// Enter a matrix A of size n, (n is input from the keyboard), let’s calculate:
// - Print the transposed matrix of A
#include <stdio.h>
int main (){
    //Input matrix
    int n;
    int sum = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; i++){
        printf("Row %d: ", i+1);
        for (int j = 0; j < n; j++){   
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    
    printf("\nThe transposed of The matrix is: ");
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < n; j++){
            printf("%d ", arr[j][i]);
        }
    }
    return 0;
}