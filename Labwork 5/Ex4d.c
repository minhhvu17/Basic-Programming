#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Input matrix
    int n;
    int sum = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    float arr[n][n];
    for (int i = 0; i < n; i++){
        printf("Row %d: ", i+1);
        for (int j = 0; j < n; j++){
            scanf("%f", &arr[i][j]);
        }
    }
    printf("\n"); 
    int i, j, k;
    float ratio;
    float determinant = 1.0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ratio = arr[j][i] / arr[i][i];
            for (int k = 0; k < n; k++) {
                arr[j][k] = arr[j][k] - ratio * arr[i][k];
            }
        }
    }
    printf("\n After gaussian elimination, we have:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%0.2f\t", arr[i][j]);
        }
        printf("\n");
        determinant *= arr[i][i];
    }
    printf("The determinant of The matrix is: %0.3f\t", determinant);
}
