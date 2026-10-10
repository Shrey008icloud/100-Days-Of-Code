/*Q112 (Functions)
Write a function to find the maximum element in an array.
Show Sample Test Cases
Input 1:
5
3 1 4 1 5
Output 1:
5*/
#include <stdio.h>

int findMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    return max;
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d", findMax(a, n));
    return 0;
}