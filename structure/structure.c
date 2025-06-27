#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int age;
    float cgpa;
};

int main (){

    struct student s1;
    s1.age = 18;
    s1.cgpa = 7.7;

    strcpy(s1.name, "Rudraksh");
    printf("Student name is: %s\n", s1.name);
    printf("Student age is %d\n", s1.age);
    printf("Student cgpa is %f\n", s1.cgpa);



    return 0;
}