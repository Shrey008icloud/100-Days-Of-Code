/*Q121 (Pointers)
Write a program to demonstrate pointer to pointer.
Show Sample Test Cases
Input 1:
42
Output 1:
42*/
#include <stdio.h>

int main() {
    int n;
    int *ptr = &n;
    int **pptr = &ptr;
    scanf("%d", &n);
    printf("%d", **pptr);
    return 0;
}