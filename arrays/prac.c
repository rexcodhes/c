#include <stdio.h>
int main(){
    char star = '*';
    char* ptr = &star;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    return 0;
}