/*Q132 (File Handling)
Write a program to append data to an existing file.
Show Sample Test Cases
Input 1:
Hello
World
Output 1:
HelloWorld*/
#include <stdio.h>

int main() {
    char s1[100], s2[100], s[200];
    scanf("%s %s", s1, s2);
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "%s", s1);
    fclose(fp);
    fp = fopen("temp.txt", "a");
    fprintf(fp, "%s", s2);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    fscanf(fp, "%s", s);
    printf("%s", s);
    fclose(fp);
    return 0;
}