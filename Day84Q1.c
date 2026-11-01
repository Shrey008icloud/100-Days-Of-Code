/*Q134 (Dynamic Memory Allocation)
Write a program to demonstrate calloc for array initialization.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
1 2 3 4 5*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}