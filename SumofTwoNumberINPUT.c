#include <stdio.h>
int main () {
    float a,b,s;
    
    printf ("Type the first number : ");
    scanf ("%f", &a);
    
    printf ("Type the second number : ");
    scanf ("%f", &b);
    
    s = (a+b);
    printf ("This is the result of sum of two numbers: %f", s);



    return 0;
}