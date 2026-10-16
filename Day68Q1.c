/*Q118 (Pointers)
Write a program to find the sum of array elements using pointers.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
15*/
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    int *ptr = a;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", ptr + i);
    for (i = 0; i < n; i++) sum += *(ptr + i);
    printf("%d", sum);
    return 0;
}