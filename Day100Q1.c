/*Q150 (Miscellaneous)
Write a program to demonstrate the use of command line arguments to print a greeting.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
Sum = 15
Average = 3.00*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    avg = (float)sum / n;
    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
}