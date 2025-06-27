#include <stdio.h>
void storeFib(int fib[], int n);

int main (){
int n;
printf("Enter the number of elements(n>1): ");
scanf("%d", &n);
int fib[n];
storeFib(fib,n);

    return 0;
}
void storeFib (int fib[], int n){
    fib[0] =  0;
    fib[1] = 1;

    for (int i=2; i<n;i++){
        fib[i] = fib[i-1] + fib[i-2]; //important
    }

    for (int i=0; i<n; i++){
        printf("%d \t", fib[i]);
    }
    
}