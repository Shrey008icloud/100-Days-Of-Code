/*Q126 (Structures)
Write a program to store and display employee details using structure.
Show Sample Test Cases
Input 1:
John 50000
Output 1:
Name: John
Salary: 50000.00*/
#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    scanf("%s %f", e.name, &e.salary);
    printf("Name: %s\nSalary: %.2f", e.name, e.salary);
    return 0;
}