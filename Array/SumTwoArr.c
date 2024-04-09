//Take two array and add sum in third array
#include<stdio.h>
void sumTwoArr(int arr1[],int arr2[],int size){
	int i,j;
	int arr[size];
	for(i=0;i<size;i++){
		arr[i]=arr1[i]+arr2[i];
	}
	printf("Sum of Array Elements: ");
	for (j = 0; j < size; j++) {
        printf("%d ",arr[j]);
    }
}

int main() {
    int i,j,size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size];
    
    printf("Enter %d elements of 1st array: ",size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter %d elements of 2nd array: ",size);
    for (j = 0; j < size; j++) {
        scanf("%d", &arr2[j]);
    }
 	sumTwoArr(arr1,arr2,size);
 	return 0;
}

