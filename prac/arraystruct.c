#include <stdio.h>
#include <string.h>
struct student {
    char name[100];
    int rollno;
    float cgpa;
};

int main (){

    struct student ECE[50];

    struct student ECE[0] = {"Rudraksh", 1, 9.9};
    printf("The name is: %s\n", ECE[0].name);



    return 0;
}