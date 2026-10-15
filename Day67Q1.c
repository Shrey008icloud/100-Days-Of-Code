/*Q117 (Pointers)
Write a program to swap two numbers using pointers.
Show Sample Test Cases
Input 1:
3 7
Output 1:
7 3*/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}