#include <stdio.h>
void printNamaste();   //declaration
void printBonjour();      //declaration

int main (){
char origin;
printf("Enter your origin: ");
scanf("%c", &origin);

if (origin=='i'){
    printNamaste();       //calling
}
else if(origin=='f'){
    printBonjour();       //calling
}

    return 0;
}

void printNamaste(){            //defintion
    printf("Namaste\n");
}
void printBonjour(){              //definition 
    printf("Bonjour\n");
}