/*Q103 (Functions)
Write a function to find the GCD of two numbers using recursion.
Show Sample Test Cases
Input 1:
12 8
Output 1:
4*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}