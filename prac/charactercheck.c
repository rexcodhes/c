#include <stdio.h>

void charCheck(char str[]);

int main (){
char str[100];
char ch;
int i;
printf("Enter a string: ");

for (i = 0; i<99; i++){
    scanf("%c", &ch);
    if (ch == '\n'){
        break;
    }
    str[i] = ch;
}
str[i] = '\0';

charCheck(str);



    return 0;
}
void charCheck(char str[]){
    int found = 0;

    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == 'L'){
            found = 1;
            break;
        }
    }
    if (found){
        printf("The string contains the letter L\n");
    }
    else {
        printf("The string does not contain the letter L\n");
    }
        
}
    