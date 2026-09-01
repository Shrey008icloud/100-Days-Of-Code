
/*Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.
Show Sample Test Cases
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
10018*/
#include <stdio.h>

int main() {
    int n, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10) {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = (n * digits);
    result = last * digits + (middle - first * digits) + first;

    printf("Number after swapping = %d", result);

    return 0;
}