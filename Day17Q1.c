/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.
Show Sample Test Cases
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong*/
#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n = n / 10;
    }

    if (original == result)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}