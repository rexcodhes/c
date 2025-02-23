#include <stdio.h>
#include <math.h>
int printAreaofRectangle(int l, int b);

int main (){

    int l,b;
    printf("Enter the value of Length and Breadth respectively: ");
    scanf("%d %d", &l, &b);
    printAreaofRectangle(l,b);






    return 0;
}
int printAreaofRectangle(int l, int b){
    float area=l*b;
    printf("Area of the rectangle is %f", area);
}