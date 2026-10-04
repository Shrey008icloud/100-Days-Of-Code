/*Q106 (Functions)
Write a function to find the sum of digits of a number using recursion.
Show Sample Test Cases
Input 1:
1234
Output 1:
10*/
#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumDigits(n));
    return 0;
}