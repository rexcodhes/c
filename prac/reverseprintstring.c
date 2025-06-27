#include <stdio.h>

int main (){
    
char str[100]={0};
char ch;
int i;

printf("Enter a string: ");

for (i = 0; i< 99; i++){
    scanf("%c", &ch); // Read a single character
    if (ch == '\n'){
        break; // Exit the loop
    }
    str[i] = ch; // Store the character in the array

}
    str[i] = '\0'; // Null-terminate the string

for (i=i - 1; i>=0;i--){
    printf("%c", str[i]);
}

    return 0;
}