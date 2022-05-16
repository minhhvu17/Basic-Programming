// Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n
#include<stdio.h>
int main(){
    float n;
    float sum = 0;
    printf("Enter an integer number: ");
    scanf("%f", &n);
    for (float i = 1; i <= n;i++){
        sum += (1 / i);
    }
    printf("The sum of series: 1 + 1/2 + 1/3 +...+ 1/%.0f = %f", n, sum);
    return 0;
}