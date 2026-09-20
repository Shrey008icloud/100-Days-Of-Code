/*Q84 (Strings)
Write a program to reverse a string without using strrev().
Show Sample Test Cases
Input 1:
Hello
Output 1:
olleH*/
#include <stdio.h>

int main() {
    char s[200];
    int i, len = 0;
    scanf("%s", s);
    while (s[len] != '\0') len++;
    for (i = len - 1; i >= 0; i--) printf("%c", s[i]);
    return 0;
}