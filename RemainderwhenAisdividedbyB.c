// Divisor x Quotient + Remainder = Dividend 
// Remainder = Dividend - (Divisor x Quotient)

#include <stdio.h>
int main () {
    int a,b,q;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    q = a/b;
    int r = a - (b*q);
    printf("The remainder when %d is divided by %d is : %d",a,b,r);






    return 0;
}