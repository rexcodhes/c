#include <stdio.h>
#include <math.h>
int sum(int n);
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of first n natural numbers is: %d\n", sum(n));

    return 0;
}
//recursive function 
int sum(int n){
    if (n==1){
        return 1;
    }

    int sumNm1 = sum(n-1); //sum of 1 to n-1
    int sumN = sumNm1 + n; //sum of 1 to n

    return sumN;
}

