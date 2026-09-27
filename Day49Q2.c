/*Q98 (Strings)
Write a program to find a substring in a string (without strstr).
Show Sample Test Cases
Input 1:
hello world
world
Output 1:
Found at position 6*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[200], sub[100];
    int i, j, found, pos = -1, ls, lsub;
    scanf("%[^\n]", s); getchar();
    scanf("%s", sub);
    ls = strlen(s); lsub = strlen(sub);
    for (i = 0; i <= ls - lsub && pos == -1; i++) {
        found = 1;
        for (j = 0; j < lsub; j++) if (s[i+j] != sub[j]) { found = 0; break; }
        if (found) pos = i + 1;
    }
    if (pos != -1) printf("Found at position %d", pos);
    else printf("Not Found");
    return 0;
}