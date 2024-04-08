//find greatest of three number using nested if-else
#include<stdio.h>
int greatestNo(){
	int a,b,c;
	printf("Enter three number: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c)
			return a;
		else
			return c;
	}else{
		if(b>c)
			return b;
		else
			return c;
	}	
}
int main(){
	printf("Greatest No: %d",greatestNo());
}
