#include <stdio.h>
int calcFact(int n);

int main (){

    int n;
    int fact=1;
    printf("ENter the value of n: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d\n", n, calcFact(n));


    return 0;
}
int calcFact(int n){
    int fact=1;

    if (n==0){
        return 1;
    }
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}