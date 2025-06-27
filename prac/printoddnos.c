#include <stdio.h>
int main (){
    int countodd=0;

    for (int i=1; i<=100; i++){
        if ((i%2) != 0){
            countodd++;
        }
    }
printf("The number of odd numbers between 1 and 100 is: %d\n", countodd);




    return 0;
}