#include <stdio.h> 
#include <string.h>

int main (){
    char oldStr[] = "Hello World";
    char newStr[] = "No World";
    strcpy(newStr, oldStr);
    printf("Value of new string: %s\n", newStr);





    return 0;
}