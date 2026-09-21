/*Q86 (Strings)
Write a program to count the number of vowels and consonants in a string.
Show Sample Test Cases
Input 1:
Hello World
Output 1:
Vowels: 3
Consonants: 7*/
#include <stdio.h>

int main() {
    char s[200];
    int i, v = 0, c = 0;
    gets(s);
    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i] | 32;
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", v, c);
    return 0;
}