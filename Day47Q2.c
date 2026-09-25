/*Q94 (Strings)
Write a program to check if two strings are anagrams.
Show Sample Test Cases
Input 1:
listen
silent
Output 1:
Anagram
Input 2:
hello
world
Output 2:
Not Anagram*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    int freq[256] = {0}, i;
    scanf("%s %s", s1, s2);
    if (strlen(s1) != strlen(s2)) { printf("Not Anagram"); return 0; }
    for (i = 0; s1[i]; i++) freq[(unsigned char)s1[i]]++;
    for (i = 0; s2[i]; i++) freq[(unsigned char)s2[i]]--;
    for (i = 0; i < 256; i++) if (freq[i]) { printf("Not Anagram"); return 0; }
    printf("Anagram");
    return 0;
}