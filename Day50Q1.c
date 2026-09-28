/*Q99 (Strings)
Write a program to sort characters of a string alphabetically.
Show Sample Test Cases
Input 1:
dcba
Output 1:
abcd*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, j, len;
    char temp;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - i - 1; j++)
            if (s[j] > s[j+1]) { temp = s[j]; s[j] = s[j+1]; s[j+1] = temp; }
    printf("%s", s);
    return 0;
}