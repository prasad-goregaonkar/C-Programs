//find minimum and maximum number fram array
#include<stdio.h>
#include<limits.h>
void findminmax(int arr[],int length){
	int i;
	int min=INT_MAX;
	int max=INT_MIN;
	for(i=0;i<length;i++){
		if(arr[i]<min)
			min=arr[i];
		if (arr[i]>max)
			max=arr[i];
	}
	printf("Minimum No: %d\n",min);
	printf("Maximum No: %d\n",max);
	return;
}
int main(){
	int arr[10]={40,10,44,23,45,67,32,24,57,22};
	int length=sizeof(arr)/sizeof(arr[0]);
	findminmax(arr,length);
	return 0;
}
