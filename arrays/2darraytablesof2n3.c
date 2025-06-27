#include <stdio.h>
void storeTables(int tables[][10], int n, int m, int number);

int main (){
    // 2 number, 10 elements
    int n;
    int tables[2][10]; // _ _ _ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _
    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);

    for (int i = 0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

    for (int i = 0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    
    
    return 0;
}

void storeTables(int tables[][10], int n, int m, int number){
    for (int i = 0; i<m; i++){
        tables[n][i] = number * (i+1);


    }
}