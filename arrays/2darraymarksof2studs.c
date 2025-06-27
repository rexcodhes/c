#include <stdio.h>
int main (){
    // 2 students, 3 subjects marks
    int marks[2][3]; // _ _ _ || _ _ _
    marks [0][0] = 90;
    marks [0][1] = 80;
    marks [0][2] = 70;
    
    marks [1][0] = 60;
    marks [1][1] = 50;
    marks [1][2] = 40;

    printf("Student 1: Marks of 1st subject is = %d\n", marks[0][0]);
    printf("Student 1: Marks of 2nd subject is = %d\n", marks[0][1]);
    return 0;
}