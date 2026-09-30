/*Q102 (Functions)
Write a function to check if a number is prime.
Show Sample Test Cases
Input 1:
7
Output 1:
Prime
Input 2:
4
Output 2:
Not Prime*/
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}