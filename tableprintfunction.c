#include <stdio.h>
int printTable(int n);

int main (){
int n;
printf("Enter the value of N: ");
scanf("%d", &n);

printTable(n); //arguement/actualparameter




    return 0;
}
int printTable(int n){ //parameter/formal parameter
for (int i=1; i<=10; i++){
printf("%d\n", i*n);
}

}