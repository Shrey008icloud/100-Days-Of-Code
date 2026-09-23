/*Q89 (Strings)
Write a program to count the number of words in a string.
Show Sample Test Cases
Input 1:
Hello World how are you
Output 1:
5*/
#include <stdio.h>

int main() {
    char s[200];
    int i, words = 0;
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') words++;
    if (s[0] != '\0') words++;
    printf("%d", words);
    return 0;
}