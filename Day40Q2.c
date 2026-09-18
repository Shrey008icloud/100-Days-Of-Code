/*Q80 (Arrays (2D))
Write a program to multiply two matrices.
Show Sample Test Cases
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
19 22
43 50*/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;
    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++) for (j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r2; i++) for (j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++) c[i][j] += a[i][k] * b[k][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}