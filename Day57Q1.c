/*Q107 (Functions)
Write a function to reverse a number using recursion.
Show Sample Test Cases
Input 1:
12345
Output 1:
54321*/
#include <stdio.h>

void reverseNum(int n) {
    if (n == 0) return;
    printf("%d", n % 10);
    reverseNum(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    reverseNum(n);
    return 0;
}