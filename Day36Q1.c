/*Q71 (Arrays (1D))
Write a program to merge two sorted arrays into a third sorted array.
Show Sample Test Cases
Input 1:
3
1 3 5
3
2 4 6
Output 1:
1 2 3 4 5 6*/
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int m, n, i, j, k;
    scanf("%d", &m);
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    i = 0; j = 0; k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];
    for (i = 0; i < m + n; i++) printf("%d ", c[i]);
    return 0;
}