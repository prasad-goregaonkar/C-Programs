//Program1= Finding F from C(temp)
#include<stdio.h>
//	function defination
	float tempConversion(float input){
		float tempConversion=(input-32)*5/9;
		return tempConversion;
	}
int main(){
	float temp;
		printf("Enter Temp in Farenhite: ");
		scanf("%f",&temp);
		
	//	int output=(temp-32)*5/9;
	//  function call
		float output=tempConversion(temp);
		printf("Temperature in Celcius: %f",output);
		return 0;
}
