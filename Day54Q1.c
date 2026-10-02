/*Q104 (Functions)
Write a function to find the power of a number using recursion.
Show Sample Test Cases
Input 1:
2 10
Output 1:
1024*/
#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%lld", power(base, exp));
    return 0;
}