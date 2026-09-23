/*Q90 (Strings)
Write a program to compare two strings without using strcmp().
Show Sample Test Cases
Input 1:
hello
hello
Output 1:
Strings are equal
Input 2:
abc
xyz
Output 2:
Strings are not equal*/
#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int i = 0, eq = 1;
    scanf("%s %s", s1, s2);
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) { eq = 0; break; }
        i++;
    }
    if (s1[i] != s2[i]) eq = 0;
    printf("%s", eq ? "Strings are equal" : "Strings are not equal");
    return 0;
}