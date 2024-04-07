//Problem3: Take 3 digit no and find sum and reverse it
#include<stdio.h>
	int sumNo(int input){
	int rem,quo;
		while(input!=0){	
			rem+=input%10;
			quo=input/10;
			input=quo;
		}
		return rem;
	}	
	int revNo(int input){
		int rem,quo;
		int rev=0;
		while(input!=0){			
			rem=input%10;
			rev=rev*10+rem;
			input=input/10;
		}
		return rev;
	}
int main(){
	int input,sum,quo,rev;
	printf("Enter a 3 Digit No: ");
	scanf("%d",&input);
	printf("Reverse No is: %d\n",revNo(input));
	printf("Sum of 3 No: %d",sumNo(input));
}
