#include <stdio.h>
#include <math.h>

void areaofSquare(double side);

int main(){
double side;
printf("Enter the value of side: ");
scanf("%d", &side);

areaofSquare(side);



    return 0;
}
void areaofSquare(double side){
printf("%f", pow(side,2));


}