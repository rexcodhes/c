#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a name: ");
    fgets(str, 100, stdin);
    int length = strlen(str) -1;
    printf("Length of string is: %d\n", length);

    return 0;
}
