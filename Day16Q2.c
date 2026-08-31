/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.
Show Sample Test Cases
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not palindrome*/
#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}