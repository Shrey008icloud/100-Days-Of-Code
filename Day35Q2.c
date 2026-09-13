/*Q70 (Arrays (1D))
Write a program to remove duplicate elements from an array.
Show Sample Test Cases
Input 1:
6
1 2 2 3 4 4
Output 1:
1 2 3 4
Input 2:
5
5 5 5 5 5
Output 2:
5*/
#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) a[k] = a[k + 1];
                n--; j--;
            }
        }
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}