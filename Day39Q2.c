/*Q78 (Arrays (2D))
Write a program to find the sum of two matrices.
Show Sample Test Cases
Input 1:
2 2
1 2
3 4
5 6
7 8
Output 1:
6 8
10 12*/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}