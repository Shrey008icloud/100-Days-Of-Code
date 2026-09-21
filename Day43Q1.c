/*Q85 (Strings)
Write a program to check if a string is a palindrome.
Show Sample Test Cases
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not Palindrome*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, len, pal = 1;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) { pal = 0; break; }
    printf("%s", pal ? "Palindrome" : "Not Palindrome");
    return 0;
}