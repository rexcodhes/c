#include <stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i<=n; i++){
        sum = sum + i;
    }
    printf("The sum of first %d natural number is: %d\n", n, sum);

    for (int i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }


    return 0;
}