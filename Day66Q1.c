/*Q116 (Pointers)
Write a program to demonstrate the use of pointers (address and value).
Show Sample Test Cases
Input 1:
5
Output 1:
Value: 5*/
#include <stdio.h>

int main() {
    int n;
    int *ptr = &n;
    scanf("%d", ptr);
    printf("Value: %d", *ptr);
    return 0;
}