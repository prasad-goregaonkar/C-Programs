//merge two array
#include<stdio.h>

void mergeArr(int arr1[],int arr2[],int size1,int size2){
	int arr[size1+size2];
	int i,j,k;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<size1; i++){
		arr[i] = arr1[i];
	}
	
	for(j=0; j<size2; j++){
		arr[size1+j] = arr2[j];
	}
	printf("Merged Array: ");
	for(k=0; k<length; k++){
		printf(" %d ",arr[k]);
	}
	
}

int main() {
    int i, j, size1,size2;
    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);
    
    printf("Enter the size of 2st array: ");
    scanf("%d", &size2);
    int arr1[size1];
    int arr2[size2];
    
    printf("Enter %d elements of the array: ",size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter %d elements of 2nd array: ",size2);
    for (j = 0; j < size2; j++) {
        scanf("%d", &arr2[j]);
    }
    mergeArr(arr1,arr2, size1,size2);
    return 0;
}

