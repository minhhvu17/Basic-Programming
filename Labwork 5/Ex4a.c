// Enter a matrix A of size n, (n is input from the keyboard), let’s calculate:
// - The sum of all the matrix A’s elements

#include <stdio.h>
int main (){
    //Input matrix
    int n;
    int sum = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int arr[100][100];

    // for (int i = 0; i < n; i++){
    //     printf("Row %d: ", i+1);
    //     for (int j = 0; j < n; j++){   
    //         scanf("%d", &arr[i][j]);
    //         sum += arr[i][j];
    //     }
    // }
    
    //Print out the matrix
    printf("\nThe matrix is: ");
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n"); 

    printf("Sum of all elements of the matrix is: %d", sum);
    printf("/n");

    
    //Function 3
    int det = 0;
    int product;
    int y;
    
    
    return 0;
}
