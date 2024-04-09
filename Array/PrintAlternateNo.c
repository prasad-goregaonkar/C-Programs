//Print alternate elements in array.
#include<stdio.h>
void printAlternateEle(int arr[],int size){
	int i;
	printf("Alternate Elements: ");
	for(i=0;i<size;i+=2){
		printf("%d ",arr[i]);
	}
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
    
    printAlternateEle(arr, size);
    return 0;
}
