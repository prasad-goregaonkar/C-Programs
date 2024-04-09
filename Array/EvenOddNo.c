//even odd in array
#include<stdio.h>

void evenOdd(int arr[], int size) {
    int i,j;
    printf("Even Numbers: \n");
    for(i = 0; i < size; i++) {
        if(arr[i]%2==0)
        	printf("%d\n",arr[i]);
    }
    printf("Odd Numbers: \n");
    for(j = 0; j < size; j++) {
        if(arr[j]%2!=0)
        	printf("%d\n",arr[j]);
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
    
    evenOdd(arr, size);
    return 0;
}

