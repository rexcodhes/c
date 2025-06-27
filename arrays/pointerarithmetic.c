#include <stdio.h>
int main (){
    int marks1 = 22;
    int marks2 = 23;
    int *ptr = &marks1;
    int *_ptr = &marks2;
    printf("%u The difference is is %u\n", ptr, ptr-_ptr);
    printf("%u The comparison = %u\n", _ptr, ptr==_ptr);
    return 0;

}