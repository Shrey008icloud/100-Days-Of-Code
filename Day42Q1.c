/*Q83 (Strings)
Write a program to find the length of a string without using strlen().
Show Sample Test Cases
Input 1:
Hello
Output 1:
5*/
#include <stdio.h>

int main() {
    char s[200];
    int len = 0;
    scanf("%s", s);
    while (s[len] != '\0') len++;
    printf("%d", len);
    return 0;
}