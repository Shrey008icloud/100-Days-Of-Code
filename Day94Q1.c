/*Q144 (Sorting)
Write a program to sort an array using selection sort.
Show Sample Test Cases
Input 1:
5
64 25 12 22 11
Output 1:
11 12 22 25 64*/
#include <stdio.h>

int main() {
    int n, i, j, minIdx, temp;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n-1; i++) {
        minIdx = i;
        for (j = i+1; j < n; j++) if (a[j] < a[minIdx]) minIdx = j;
        temp = a[i]; a[i] = a[minIdx]; a[minIdx] = temp;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}