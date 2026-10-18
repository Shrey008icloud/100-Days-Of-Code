/*Q120 (Pointers)
Write a program to find the largest element using pointers.
Show Sample Test Cases
Input 1:
5
10 20 30 15 25
Output 1:
30*/
#include <stdio.h>

int main() {
    int a[100], n, i;
    int *ptr = a, *maxPtr;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", ptr + i);
    maxPtr = ptr;
    for (i = 1; i < n; i++) if (*(ptr + i) > *maxPtr) maxPtr = ptr + i;
    printf("%d", *maxPtr);
    return 0;
}