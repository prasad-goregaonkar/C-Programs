  //check given no is prime or not
#include<stdio.h>

void isPrime(int input){
	int i,isPrimeflag=1;
	if(input<1){
		isPrimeflag=0;
	}else{
		for(i=2;i<=input/2;i++){
			if(input%i==0){
				isPrimeflag=0;
				break;
			}
		}
	}	
	if(isPrimeflag)
		printf("Given No is Prime No.\n");
	else{
		printf("Given No is not Prime No.\n");
	}
}
int main(){
	int input,output;
	printf("Enter No: ");
	scanf("%d",&input);
	isPrime(input);
}
