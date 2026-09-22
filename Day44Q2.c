/*Q88 (Strings)
Write a program to convert a string to lowercase without using tolower().
Show Sample Test Cases
Input 1:
HELLO
Output 1:
hello*/
#include <stdio.h>

int main() {
    char s[200];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    printf("%s", s);
    return 0;
}