#include <stdio.h>

int countOdd(int arr[], int n);

int main (){
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];

for (int i=0; i<n; i++){
    printf("%d index: ", i);
    scanf("%d", &arr[i]);

}
int count = countOdd(arr,n);
printf("The number of odd numbers in the array is: %d\n", count);

for (int i = n-1; i>=0; i--){
    printf("%d\t", arr[i]);
}


    return 0;
}
int countOdd(int arr[], int n){
    int count = 0;
    for (int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}