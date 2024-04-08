
#include<stdio.h>

int main(){
	int num1,num2,choice,result;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	
	printf("Enter operator 1.Addition 2.Substraction 3.Multiplicaton 4.Division 5.Mod: ");
	scanf("%d",&choice);
//	scanf("%c",ch);
	
	switch(choice){
		case 1:
			result=num1+num2;
			printf("Addition of Number: %d",result);
			break;
		case 2:
			result=num1-num2;
			printf("Subsctraction of Number: %d",result);
			break;
		case 3:
			result=num1*num2;
			printf("Multiplication of Number: %d",result);
			break;
		case 4:
			result=num1/num2;
			printf("Division of Number: %d",result);
			break;
		case 5:
			result=num1%num2;
			printf("Mod of Number: %d",result);
			break;
		default:
			result=num1+num2;
			printf("Default Additon of No:%d",result);
			break;
	}
}
