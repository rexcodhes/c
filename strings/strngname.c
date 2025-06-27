#include <stdio.h>

int main (){
    char Fname[50];
    char Sname[50];
    printf("What's your First name? ");
    scanf("%s", Fname);
    printf("What's your Second name? ");
    scanf("%s", Sname);
    printf("My name is: %s %s\n", Fname, Sname);

    return 0;
}