#include <stdio.h>
#include <math.h>

int printAreaOfCircle(int rad);
int main (){

int rad;
printf("Enter the value of radius: ");
scanf("%d", &rad);
printAreaOfCircle(rad);     //arguement/functioncall/actual parameter





    return 0;
}
int printAreaOfCircle(int rad){        //formal parameter//parameter//

    float area = 3.14 * pow(rad,2);
    printf("The area of the circle is %f\n", area);
}