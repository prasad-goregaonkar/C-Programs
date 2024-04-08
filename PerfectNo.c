//check given no is perfect or not
//perfect number, a positive integer that is equal to the sum of its proper divisors
#include <stdio.h>

void isPerfectNo(int input) {
    int i, sum = 0;
    for (i = 1; i < input; i++) {
        if (input % i == 0) {
            sum += i;
        }
    }
    if (sum == input) {
        printf("Given Number is Perfect No.\n");
    } else {
        printf("Given Number is Not Perfect No.\n");
    }
}

int main() {
    int input;
    printf("Enter No: ");
    scanf("%d", &input);
    isPerfectNo(input);
    return 0;
}

