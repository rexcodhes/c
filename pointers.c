#include <stdio.h>
int main(){
int age = 25;
int* ptr = &age;

*ptr = 31;

printf("%d", age);

    return 0;
}

// ptr = &number; - stores the address of the variable
// *ptr = number; - stores the value of the variable
