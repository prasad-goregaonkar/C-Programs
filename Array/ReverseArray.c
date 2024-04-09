//Reverse the given array.
#include<stdio.h>
void reverseArr(int arr[],int size){
	int i;
	printf("Reverse Array: ");
	for(i=size-1; i>=0; i--){
		printf(" %d ",arr[i]);
	}
}
int main() {
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter %d elements of array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArr(arr, size);
    return 0;
}

