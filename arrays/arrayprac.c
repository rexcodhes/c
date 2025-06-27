#include <stdio.h>
int main (){
int marks1 = 97;
int marks2 = 98;
int marks3 = 89;

int marks[3];
printf("Enter the marks of 3 subjects: ");
scanf("%d %d %d", &marks[0],&marks[1], &marks[2]);

printf("The marks of 1st subject is: %d\n", marks[0]);


    return 0;
}