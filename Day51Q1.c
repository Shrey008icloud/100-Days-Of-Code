/*Q101 (Functions)
Write a function to find the factorial of a number using recursion.
Show Sample Test Cases
Input 1:
5
Output 1:
120*/
#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));
    return 0;
}