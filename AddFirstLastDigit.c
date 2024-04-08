//add first and last digit
#include<stdio.h>
void addFirstLastDigit(int input){
	int firstNo,lastNo,result;
	lastNo=input%10;
	
	while(input>10){
		input/=10;
	}
	firstNo=input;
	result=firstNo+lastNo;
	printf("addition of first and last digit: %d",result);
	
}
int main(){
	int inputNo;
	printf("Enter Number: ");
	scanf("%d",&inputNo);
	addFirstLastDigit(inputNo);
}
