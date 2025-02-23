#include <stdio.h>
int main () {
    float r,pi,v;
    pi = 3.1415;
    printf("Enter your radius : ");
    scanf ("%f", &r);
    v = (4*pi*r*r*r) / 3;
    printf("The volume of the sphere is : %f", v);




    return 0;
}