//is given number is strong
//sum of the factorials of its digits equals the number itself
//Recursion technique and backtracking
#include <stdio.h>

int factorial(int rem) {
    if (rem == 0 || rem == 1)
        return 1;
    else
        return rem * factorial(rem - 1);
}

int isStrong(int input) {
    int i, sum = 0, num = input;
    while (num != 0) {
        int reminder = num % 10;
        sum += factorial(reminder);
        num /= 10;
    }
    (sum == input)? return 1 : return 0;
}

int main() {
    int input,i;
    printf("Enter Number: ");
    scanf("%d", &input);
    for(i=1;i<=input;i++){
    	if(isStrong(i)){
    		printf("%d \n",i);
		}
	}
    return 0;
}

