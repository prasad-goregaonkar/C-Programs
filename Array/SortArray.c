//Sort the array.
#include<stdio.h>
void sortArr(int arr[],int size){
	int i,j,temp=0;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Array: ");
	for(i=0;i<size;i++){
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
 	sortArr(arr,size);
    return 0;
}

