/*Q95 (Strings)
Write a program to remove all spaces from a string.
Show Sample Test Cases
Input 1:
Hello World
Output 1:
HelloWorld*/
#include <stdio.h>

int main() {
    char s[200];
    int i, j = 0;
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] != ' ') s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
    return 0;
}