//Find factorial no given no
#include<stdio.h>
void findFactorial(int input){
	int i,fact=1;
	for(i=1;i<=input;i++){
		fact*=i;
	}
	printf("Factorial of given Number: %d",fact);
}
int main(){
	int input;
	printf("Enter a Number: ");
	scanf("%d",&input);
	findFactorial(input);
}
