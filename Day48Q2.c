/*Q96 (Strings)
Write a program to count occurrences of a character in a string.
Show Sample Test Cases
Input 1:
hello
l
Output 1:
2*/
#include <stdio.h>

int main() {
    char s[200], ch;
    int i, count = 0;
    scanf("%s", s);
    scanf(" %c", &ch);
    for (i = 0; s[i] != '\0'; i++) if (s[i] == ch) count++;
    printf("%d", count);
    return 0;
}