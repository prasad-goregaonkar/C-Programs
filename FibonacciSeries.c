//Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones
#include<stdio.h>
void isFibseries(int input){
	int i,n1=0,n2=1,n3=0;
	printf("%d\n",n1);
	printf("%d\n",n2);
	for(i=2;i<input;i++){
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}

int main() {
    int input,i;
    printf("Enter Number: ");
    scanf("%d", &input);
    isFibseries(input);
}

