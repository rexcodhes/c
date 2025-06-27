#include <stdio.h>

int vowelCount(char str[]);

int main (){
    char str[100];
    char ch;
    int i;
    printf("Enter a string (press Enter to finish):\n");

    for (i = 0; i < 99; i++) { // Leave space for the null terminator
        scanf("%c", &ch); // Read a single character
        if (ch == '\n') { // Check if Enter is pressed
            break; // Exit the loop
        }
        str[i] = ch; // Store the character in the array
    }
    str[i] = '\0'; // Null-terminate the string
    printf("The string has %d vowels\n", vowelCount(str));




    return 0;
}
int vowelCount(char str[]){
    int countv = 0;
    int countV=0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            countv++;
        }
    }
    return countv + countV;


}