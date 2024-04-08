//check given no is perfect or not
//perfect number, a positive integer that is equal to the sum of its proper divisors
#include <stdio.h>

int isPerfectNo(int input) {
    int i, sum = 0;
    for (i = 1; i < input; i++) {
        if (input % i == 0) {
            sum += i;
        }
    }
    (sum == input) ? return 1 : return 0;
}

int main() {
    int input,i;
    printf("Enter No: ");
    scanf("%d", &input);
    for(i=1;i<=input;i++){
    	if(isPerfectNo(i)){
    		printf("%d \n",i);
		}
	}
    
    return 0;
}

