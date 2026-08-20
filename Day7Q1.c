/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.
Input 1:
2020
Output 1:
Leap year
Input 2:
1900
Output 2:
Not a leap year
Input 3:
2000
Output 3:
Leap year
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.*/
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("The year is a leap year.");
    } else if (year % 100 == 0) {
        printf("The year is not a leap year.");
    } else if (year % 4 == 0) {
        printf("The year is a leap year.");
    } else {
        printf("The year is not a leap year.");
    }

    return 0;
}