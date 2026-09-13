/*Q69 (Arrays (1D))
Write a program to find the second largest element in an array.
Show Sample Test Cases
Input 1:
5
10 20 30 40 50
Output 1:
40
Input 2:
4
5 1 3 2
Output 2:
3*/
#include <stdio.h>

int main() {
    int n, i, largest, second;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    largest = second = -2147483647;
    for (i = 0; i < n; i++) {
        if (a[i] > largest) { second = largest; largest = a[i]; }
        else if (a[i] > second && a[i] != largest) second = a[i];
    }
    printf("%d", second);
    return 0;
}