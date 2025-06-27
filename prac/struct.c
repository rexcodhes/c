#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int rollno;
    float percentage;
};

int main (){


    struct student s1;
    s1.percentage = 99.9;
    s1.rollno = 1;
    strcpy(s1.name, "Rudraksh");

    printf("The name is: %s\n", s1.name);
    printf("The roll no is: %d\n", s1.rollno);
    printf("The percentage is: %f\n", s1.percentage);

    struct student s2;
    s2.percentage = 80.0;
    s2.rollno = 2;
    strcpy(s2.name, "Siddharth");

    printf("The name is: %s\n", s2.name);
    printf("The roll no is: %d\n", s2.rollno);
    printf("The percentage is : %f\n", s2.percentage);

    struct student s3;
    strcpy(s3.name, "Ravi");
    s3.percentage = 99.0;
    s3.rollno = 3;

    printf("The name is: %s\n", s3.name);
    printf("The roll no is: %d\n", s3.rollno);
    printf("The percentage is: %f\n", s3.percentage);

    return 0;
}