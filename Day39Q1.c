/*Q77 (Arrays (2D))
Write a program to read and display a 2D matrix.
Show Sample Test Cases
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 2 3
4 5 6*/
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}