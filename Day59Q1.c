/*Q109 (Functions)
Write a function to find the LCM of two numbers.
Show Sample Test Cases
Input 1:
4 6
Output 1:
12*/
#include <stdio.h>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", lcm(a, b));
    return 0;
}