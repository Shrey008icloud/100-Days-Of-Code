/*Q100 (Strings)
Write a program to count the number of uppercase and lowercase letters in a string.
Show Sample Test Cases
Input 1:
Hello World
Output 1:
Uppercase: 2
Lowercase: 8*/
#include <stdio.h>

int main() {
    char s[200];
    int i, upper = 0, lower = 0;
    gets(s);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') upper++;
        else if (s[i] >= 'a' && s[i] <= 'z') lower++;
    }
    printf("Uppercase: %d\nLowercase: %d", upper, lower);
    return 0;
}