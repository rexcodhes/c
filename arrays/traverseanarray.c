#include <stdio.h>
int main (){

int adhaar[5];

//input 
int *ptr = &adhaar[0];
for (int i=0; i<5; i++){
    printf("%d index: ", i);
    scanf("%d", (ptr+i));
}
//output
for (int i=0; i<5; i++){
    printf("%d index = %d\n", i, *(ptr+i));
}

    return 0;
}