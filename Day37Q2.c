/*Q74 (Arrays (1D))
Write a program to right rotate an array by one position.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
5 1 2 3 4*/
#include <stdio.h>

int main() {
    int a[100], n, i, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    temp = a[n - 1];
    for (i = n - 1; i > 0; i--) a[i] = a[i - 1];
    a[0] = temp;

    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}