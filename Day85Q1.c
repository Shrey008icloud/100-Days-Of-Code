/*Q135 (Dynamic Memory Allocation)
Write a program to demonstrate realloc for resizing an array.
Show Sample Test Cases
Input 1:
3
1 2 3
5
1 2 3 4 5
Output 1:
1 2 3 4 5*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int m;
    scanf("%d", &m);
    arr = (int*)realloc(arr, m * sizeof(int));
    for (i = n; i < m; i++) scanf("%d", &arr[i]);
    for (i = 0; i < m; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}