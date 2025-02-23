#include <stdio.h>
int main (){

    int n,table=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)
    {
        table=n*i;
        printf("%d\n", table);
    }

    // printf("The table of %d is %d", n,table);





    return 0;
}