/*Q82 (Arrays (2D))
Write a program to check if a matrix is symmetric.
Show Sample Test Cases
Input 1:
3
1 2 3
2 4 5
3 5 6
Output 1:
Symmetric*/
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sym = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < n && sym; i++)
        for (j = 0; j < n && sym; j++)
            if (a[i][j] != a[j][i]) sym = 0;
    printf("%s", sym ? "Symmetric" : "Not Symmetric");
    return 0;
}