/*Q119 (Pointers)
Write a program to reverse an array using pointers.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
5 4 3 2 1*/
#include <stdio.h>

int main() {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", (a + i));
    for (i = n - 1; i >= 0; i--) printf("%d ", *(a + i));
    return 0;
}