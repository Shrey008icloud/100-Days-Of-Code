/*Q108 (Functions)
Write a function to check if a number is a palindrome.
Show Sample Test Cases
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not Palindrome*/
#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n) { rev = rev * 10 + n % 10; n /= 10; }
    return rev;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", n == reverse(n) ? "Palindrome" : "Not Palindrome");
    return 0;
}