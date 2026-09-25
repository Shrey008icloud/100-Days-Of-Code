/*Q93 (Strings)
Write a program to find the frequency of characters in a string.
Show Sample Test Cases
Input 1:
hello
Output 1:
h-1 e-1 l-2 o-1*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int freq[256] = {0}, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) freq[(unsigned char)s[i]]++;
    for (i = 0; s[i]; i++)
        if (freq[(unsigned char)s[i]]) {
            printf("%c-%d ", s[i], freq[(unsigned char)s[i]]);
            freq[(unsigned char)s[i]] = 0;
        }
    return 0;
}