/*Q123 (Structures)
Write a program using structure to store and display information of multiple students.
Show Sample Test Cases
Input 1:
2
Alice 90
Bob 85
Output 1:
Alice 90
Bob 85*/
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student s[50];
    for (i = 0; i < n; i++) scanf("%s %d", s[i].name, &s[i].marks);
    for (i = 0; i < n; i++) printf("%s %d\n", s[i].name, s[i].marks);
    return 0;
}