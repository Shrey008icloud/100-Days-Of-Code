/*Q145 (Sorting)
Write a program to sort an array using insertion sort.
Show Sample Test Cases
Input 1:
5
5 3 1 4 2
Output 1:
1 2 3 4 5*/
#include <stdio.h>

int main() {
    int n, i, j, key;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) { a[j+1] = a[j]; j--; }
        a[j+1] = key;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}