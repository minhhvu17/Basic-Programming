// Enter a matrix A of size n, (n is input from the keyboard), let’s calculate:
// - (option)The Determinant of the matrix A
#include <stdio.h>
int determinant (int arr[100][100], int n){
    // j: vị trí hàng
    // k: vị trí cột
    int coordinate_x; int coordinate_y;
    int part[100][100];
    int det = 0;
    int cofactor=1;
    if(n==2){
        det = part[0][0] * part [1][1] - part[0][1] * part [1][0];
    }
    else{
        for (int i = 0; i < n; i++){
            coordinate_x = 0;
            coordinate_y = 0;
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++){
                    if(j != 0 && k != i){
                        part[coordinate_y][coordinate_x] = arr[j][k];
                        coordinate_x += 1;
                    }
                    if (coordinate_x > n-2){
                        coordinate_y += 1;
                        coordinate_x = 0;
                    }
                }
            }
            det += cofactor*part[0][i]*(determinant(part, n-1));
            cofactor = cofactor * (-1);
        }
    }
    return det;
}
int main (){
    //Input matrix
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; i++){
        printf("Row %d: ", i+1);
        for (int j = 0; j < n; j++){   
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is: ");
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < n + n - 1; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n%d", determinant(arr, n));
    return 0;
}