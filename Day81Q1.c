/*Q131 (File Handling)
Write a program to copy content from one file to another.
Show Sample Test Cases
Input 1:
Hello World
Output 1:
Hello World*/
#include <stdio.h>

int main() {
    char s[200];
    gets(s);
    FILE *src = fopen("src.txt", "w");
    fprintf(src, "%s", s);
    fclose(src);
    src = fopen("src.txt", "r");
    FILE *dest = fopen("dest.txt", "w");
    char c;
    while ((c = fgetc(src)) != EOF) fputc(c, dest);
    fclose(src); fclose(dest);
    dest = fopen("dest.txt", "r");
    fscanf(dest, "%[^\n]", s);
    printf("%s", s);
    fclose(dest);
    return 0;
}