#include <stdio.h>
float calpercen(int m1,int m2,int m3);

int main (){
    
int m1,m2,m3;
printf("Enter the marks of 3 subjects: ");
scanf("%d %d %d", &m1,&m2,&m3);
float percentage = (calpercen(m1,m2,m3));
printf("The percentage is: %f\n", percentage);

    return 0;
}
float calpercen(int m1, int m2, int m3){
    float percentage = (m1+m2+m3)/3.0;
    return percentage;
}