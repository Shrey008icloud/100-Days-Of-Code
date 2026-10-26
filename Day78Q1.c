/*Q128 (Structures)
Write a program to sort students by marks using structure array.
Show Sample Test Cases
Input 1:
3
Alice 70
Bob 90
Charlie 80
Output 1:
Alice 70
Charlie 80
Bob 90*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i, j;
    scanf("%d", &n);
    struct Student s[50], temp;
    for (i = 0; i < n; i++) scanf("%s %d", s[i].name, &s[i].marks);
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (s[j].marks > s[j+1].marks) { temp = s[j]; s[j] = s[j+1]; s[j+1] = temp; }
    for (i = 0; i < n; i++) printf("%s %d\n", s[i].name, s[i].marks);
    return 0;
}