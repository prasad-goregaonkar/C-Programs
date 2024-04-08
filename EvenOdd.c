//Problem4: Find even and odd no
#include<stdio.h>
int main(){
	int input;
	printf("Enter No: ");
	scanf("%d",&input);
	if(input%2==0){
		printf("Given No %d is Even Number",input);
	}else{
		printf("Given No %d is Odd Number",input);
	}
}
