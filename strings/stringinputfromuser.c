#include <stdio.h>
int main() {
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

    puts(str); // Print the string

    return 0;
}