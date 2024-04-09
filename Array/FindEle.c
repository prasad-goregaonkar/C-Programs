//find no in array
#include<stdio.h>
int findNo(int arr[],int input,int size){
	int i;
	for(i=1;i<=size;i++){
		if(arr[i]==input){
			printf("Number found at %d Position",i+1);
			break;
		}
	}
}
int main(){
	int i,size,input;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int arr[size];
	
	printf("Enter elements of an array: ");
	do{
		for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		}
	}while(i<size);
	
	printf("Enter Number to be search: ");
	scanf("%d",&input);
	findNo(arr,input,size);
}
