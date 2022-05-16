// Use the gcd function in the previous exercise to find the greatest common divisor of four
// positive integer numbers. 
#include <stdio.h>
#include "Ex1n2.h"

int main (){
    int m, n, p, q;
    int first_gcd, sec_gcd, final_gcd;
    printf("Enter 4 positive numbers seperated by a spacebar: ");
    scanf("%d%d%d%d", &m, &n, &p, &q);
    first_gcd = gcd(m, n);
    sec_gcd = gcd(p, q);
    final_gcd = gcd(first_gcd, sec_gcd);
    printf("The greatest common divisor of %d, %d, %d and %d is %d", m, n, p, q, final_gcd);
    return 0;
}