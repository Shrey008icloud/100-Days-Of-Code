/*Q124 (Structures)
Write a program to find the student with the highest marks using structure.
Show Sample Test Cases
Input 1:
3
Alice 90
Bob 85
Charlie 92
Output 1:
Charlie*/
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i, maxIdx = 0;
    scanf("%d", &n);
    struct Student s[50];
    for (i = 0; i < n; i++) scanf("%s %d", s[i].name, &s[i].marks);
    for (i = 1; i < n; i++) if (s[i].marks > s[maxIdx].marks) maxIdx = i;
    printf("%s", s[maxIdx].name);
    return 0;
}