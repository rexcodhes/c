#include <stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main (){
    printHello(); //caling
    printGoodbye(); //calling 

    return 0;
}
void printHello(){          //definition
    printf("Hello\n");
}
void printGoodbye(){       //definition
    printf("Goodbye");
}
