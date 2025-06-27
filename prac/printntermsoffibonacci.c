#include <stdio.h>

int printFibo(int n);

int main (){
int n;
scanf("%d", &n);
int fib = printFibo(n);
printf("The %dth term of the fibonacci series is: %d\n ", n, fib);


    return 0;
}
int printFibo(int n){
if (n==0){
    return 0;
}
if (n== 1){
    return 1;
}

    int fibNm1 = printFibo(n-1);
    int fibNm2 = printFibo(n-2);
    int fib = fibNm1 + fibNm2;
    return fib;
}