#include <stdio.h>
int main (){
int price[3];
printf("Enter the price of 3 items: ");
scanf("%d %d %d", &price[0], &price[1], &price[2]);
float finalcost = (price[0] + price[1] + price[2]) + (18.0/100.0 * (price[0]+ price[1]+ price[2]));
printf("%f is the final cost", finalcost);


    return 0;
}