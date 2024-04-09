//find sum of all number
#include<stdio.h>

void sumNo(int arr[], int size) {
    int i, sum = 0;
    for(i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of Numbers: %d\n", sum);
}

int main() {
    int i, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter elements of an array: ");
    for( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    sumNo(arr, size);
    return 0;
}

