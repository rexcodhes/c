#include <stdio.h>

int average(int *a, int *b);
int product(int *a, int *b);


int main (){
    int a,b;
    int avg;
    int prod;
    printf("Enter a: and b: ");
    scanf("%d %d", &a, &b);
    
    avg = average(&a, &b);
    prod = product(&a, &b);
    printf("The average of %d and %d is: %d\n", a,b, avg);
    printf("The product of %d and %d is: %d\n", a,b, prod);


    return 0;
}
int average(int *a, int *b){
    int avg = (*a + *b)/2;
    return avg;
}
int product(int *a, int *b) {
    int prod = *a * *b;
    return prod;
}