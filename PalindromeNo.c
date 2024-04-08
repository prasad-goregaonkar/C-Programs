//check given number is palidrom or not
//if we reverse given no and its same as original number then it is palidrom number

#include<stdio.h>
void isPalidrom(int n){
	int sum=0,num=n;
	
	while(num>0){
		int reminder=num%10;
		sum=sum*10+reminder;
		num/=10;
	}
	if(sum==n){
		printf("Given Number is palidrom.");
	}else{
		printf("Given Number is not palidrom.");
	}
}
int main(){
	int input;
	printf("Enter a number: ");
	scanf("%d",&input);
	isPalidrom(input);
}

