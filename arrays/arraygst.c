#include <stdio.h>
int main (){

    int cost[3];
    printf("Enter the cost of 3 items: ");
    scanf("%d %d %d", &cost[0], &cost[1], &cost[2]);
    int cost1 = cost[0] + (0.18 * cost[0]);
    int cost2 = cost[1]+ (0.18 * cost[1]);
    int cost3 = cost[2] + (0.18 * cost[2]);
    printf("The final cost of the items incl gst is %d\n %d\n %d\n", cost1, cost2, cost3);

    return 0;
}