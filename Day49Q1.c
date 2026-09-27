/*Q97 (Strings)
Write a program to replace all occurrences of a character in a string.
Show Sample Test Cases
Input 1:
hello
l
r
Output 1:
herro*/
#include <stdio.h>

int main() {
    char s[200], old, new_ch;
    int i;
    scanf("%s", s);
    scanf(" %c %c", &old, &new_ch);
    for (i = 0; s[i] != '\0'; i++) if (s[i] == old) s[i] = new_ch;
    printf("%s", s);
    return 0;
}