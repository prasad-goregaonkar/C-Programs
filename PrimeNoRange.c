
//check prime number at given range
#include<stdio.h>

int isPrime(int input){
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
	(isPrimeflag) ? return 1 : return 0;
}
int main(){
	int input,output,i;
	printf("Enter No: ");
	scanf("%d",&input);
	printf("Prime No UpTo %d:\n",input);
	for(i=1;i<=input;i++){
		if(isPrime(i)){
			printf("%d \n",i);
		}
	}
	
}
