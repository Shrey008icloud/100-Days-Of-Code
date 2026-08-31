/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Show Sample Test Cases
Input 1:
3
Output 1:
Approximate sum: 3.3
Input 2:
5
Output 2:
Approximate sum: 4.4*/
#include <stdio.h>

int main() {
    int n, i, numerator = 1, denominator = 2;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum = sum + 1;
        else {
            numerator = numerator + 2;
            denominator = denominator + 2;
            sum = sum + (float)numerator / denominator;
        }
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}