/*Q75 (Arrays (1D))
Write a program to find the intersection of two arrays.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
5
3 4 5 6 7
Output 1:
3 4 5*/
#include <stdio.h>

int main() {
    int a[100], b[100], m, n, i, j;
    scanf("%d", &m);
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i] == b[j]) { printf("%d ", a[i]); break; }
    return 0;
}