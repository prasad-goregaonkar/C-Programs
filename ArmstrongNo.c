//check no is armstrong or not
//Armstrong number is a number that is equal to the sum of cubes of its digits. 
#include<stdio.h>
void isArmstrong(int input){
	int reminder,temp=input,sum=0;
	while(input!=0){
		reminder=input%10;
		sum+=reminder*reminder*reminder;
		input=input/10;
	}
	if(temp==sum){
		printf("Given no is armstrong no.");
	}else{
		printf("Given No is not armstrong no.");
	}
}
int main(){
	int input;
	printf("Enter No: ");
	scanf("%d",&input);
	isArmstrong(input);
}
