/*Q87 (Strings)
Write a program to convert a string to uppercase without using toupper().
Show Sample Test Cases
Input 1:
hello
Output 1:
HELLO*/
#include <stdio.h>

int main() {
    char s[200];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    printf("%s", s);
    return 0;
}