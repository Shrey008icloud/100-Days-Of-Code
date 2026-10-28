/*Q130 (File Handling)
Write a program to count the number of characters in a file.
Show Sample Test Cases
Input 1:
Hello
Output 1:
5*/
#include <stdio.h>

int main() {
    FILE *fp;
    char s[200];
    int count = 0, i;
    gets(s);
    fp = fopen("temp.txt", "w");
    fprintf(fp, "%s", s);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    char c;
    while ((c = fgetc(fp)) != EOF) count++;
    fclose(fp);
    printf("%d", count);
    return 0;
}