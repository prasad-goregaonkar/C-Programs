//Accept array and print only prime numbers of array.
#include<stdio.h>
void primeNo(int arr[],int size){
	int i,j,flag;
	printf("Prime Number in Array: ");
	for( i=0; i<size; i++ ){
			flag=1;
		if(arr[i]<2){
			continue;
//			approprite statement
		}else{
			for( j=2; j<=arr[i]/2; j++ ){
			if(arr[i]%j==0)
				flag=0;
				break;
		}
		if(flag==1 )
			printf("%d ",arr[i]);
		}	
		
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
    
    primeNo(arr, size);
    return 0;
}
