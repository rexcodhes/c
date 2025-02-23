#include <stdio.h>
int printFact(int n);

int main (){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, printFact(n));
    return 0;
}
int printFact(int n){

    if(n==1){
        return 1;
    }
    int factNm1 = printFact(n-1);
    int factN = n* factNm1;
    return factN;
    
}