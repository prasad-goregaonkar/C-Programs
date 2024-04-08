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

void isStrong(int input) {
    int i, sum = 0, num = input;
    while (num != 0) {
        int reminder = num % 10;
        sum += factorial(reminder);
        num /= 10;
    }
    if (sum == input)
        printf("Given Number is a Strong Number.\n");
    else
        printf("Given Number is Not a Strong Number.\n");
}

int main() {
    int input;
    printf("Enter Number: ");
    scanf("%d", &input);
    isStrong(input);
    return 0;
}

