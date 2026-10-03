/*Q105 (Functions)
Write a function to find the Fibonacci series up to n terms using recursion.
Show Sample Test Cases
Input 1:
6
Output 1:
0 1 1 2 3 5*/
#include <stdio.h>

int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) printf("%d ", fib(i));
    return 0;
}