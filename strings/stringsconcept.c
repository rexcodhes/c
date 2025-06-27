#include <stdio.h>
int main (){

    char ch[] = {'S', 'O', 'N', 'U', '\0'};
    char string[] = "SONU";
    // '\0' is the null character, it is used to denote the end of a string

    printf("%s\n", ch);
    printf("%s\n", string);
    // %s is used to print strings

    return 0;
} 