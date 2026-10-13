/*Q115 (Functions)
Write a function to find the sum of an array using recursion.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
15*/
#include <stdio.h>

int sumArray(int a[], int n) {
    if (n == 0) return 0;
    return a[n-1] + sumArray(a, n-1);
}

int main() {
    int n, a[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d", sumArray(a, n));
    return 0;
}