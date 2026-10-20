/*Q122 (Structures)
Write a program to define a structure for a student and display their details.
Show Sample Test Cases
Input 1:
Alice 20 85.5
Output 1:
Name: Alice
Age: 20
Marks: 85.50*/
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f", s.name, s.age, s.marks);
    return 0;
}