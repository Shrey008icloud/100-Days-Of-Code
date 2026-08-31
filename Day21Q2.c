/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number.
Show Sample Test Cases
Input 1:
6
Output 1:
Perfect number
Input 2:
10
Output 2:
Not perfect number*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("The number is a perfect number.");
    else
        printf("The number is not a perfect number.");

    return 0;
}