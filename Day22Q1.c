/*Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number.
Show Sample Test Cases
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number*/
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("The number is a strong number.");
    else
        printf("The number is not a strong number.");

    return 0;
}