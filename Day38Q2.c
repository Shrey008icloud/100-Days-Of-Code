/*Q76 (Arrays (1D))
Write a program to find the union of two arrays.
Show Sample Test Cases
Input 1:
4
1 2 3 4
4
3 4 5 6
Output 1:
1 2 3 4 5 6*/
#include <stdio.h>

int main() {
    int a[100], b[100], m, n, i, j, found;
    scanf("%d", &m);
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    for (i = 0; i < m; i++) printf("%d ", a[i]);
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < m; j++) if (b[i] == a[j]) { found = 1; break; }
        if (!found) printf("%d ", b[i]);
    }
    return 0;
}