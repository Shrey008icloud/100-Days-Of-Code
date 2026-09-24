/*Q92 (Strings)
Write a program to concatenate two strings without using strcat().
Show Sample Test Cases
Input 1:
Hello
World
Output 1:
HelloWorld*/
#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int i, j;
    scanf("%s %s", s1, s2);
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++) s1[i++] = s2[j];
    s1[i] = '\0';
    printf("%s", s1);
    return 0;
}