#include <stdio.h>
void countOdd(int oddnos[], int n);  //function prototype/declaration

int main (){

int n;
printf("Enter the number of elements: ");
scanf("%d", &n);

int oddnos[n];
for (int i=0; i<n; i++){
    printf("%d index: ", i);
    scanf("%d", &oddnos[i]);
}
    countOdd(oddnos, n); //function call

    return 0;
}

void countOdd(int oddnos[], int n){ //function definition
    int count = 0;
    for(int i=0; i<n; i++){
        if (oddnos[i] % 2 != 0){
            count++;
            
        }
       
    }
    printf("Number of odd numbers in the array is: %d\n", count);
}