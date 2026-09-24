/*Q91 (Strings)
Write a program to copy one string to another without using strcpy().
Show Sample Test Cases
Input 1:
Hello
Output 1:
Hello*/
#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int i;
    scanf("%s", s1);
    for (i = 0; s1[i] != '\0'; i++) s2[i] = s1[i];
    s2[i] = '\0';
    printf("%s", s2);
    return 0;
}