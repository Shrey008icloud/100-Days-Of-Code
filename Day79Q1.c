/*Q129 (File Handling)
Write a program to write data to a file and read it back.
Show Sample Test Cases
Input 1:
Hello World
Output 1:
Hello World*/
#include <stdio.h>

int main() {
    FILE *fp;
    char s[200];
    gets(s);
    fp = fopen("temp.txt", "w");
    fprintf(fp, "%s", s);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    fscanf(fp, "%[^\n]", s);
    printf("%s", s);
    fclose(fp);
    return 0;
}