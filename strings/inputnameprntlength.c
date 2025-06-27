#include <stdio.h>
void printString(char name[]);
int printLength(char name[]);

int main () {
char name[100];
printf("Enter your name: ");
fgets(name, 100, stdin);
printString(name);
int length = printLength(name);
printf("Length of the string is: %d\n", length);

    return 0;
}

void printString(char name[]){
    for (int i=0; name[i] != '\0'; i++){
        printf("%c", name[i]);
    }
    printf("\n");
   

}

int printLength(char name[]){
    int count = 0;
    for (int i=0; name[i] != '\0'; i++){
        if (name[i] != '\n') {
        count++;
    }
}

    return count;
}   