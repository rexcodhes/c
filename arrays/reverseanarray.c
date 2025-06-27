#include <stdio.h>
void reverseArray(int arr[], int n);
void printArray (int arr[], int n);

int main (){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        printf("%d index: ", i);
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, n);
    printArray(arr,n);
    
    return 0;
}
void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
void reverseArray (int arr[], int n){
    for (int i=0; i<n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
    
}