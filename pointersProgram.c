#include <stdio.h>
int main (){
 
double salary;

printf("Enter your salary: ");
scanf("%lf", &salary);

double* ptr = &salary; 

printf("Your salary: %.2lf\n", *ptr);




    return 0;
}

