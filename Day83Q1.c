/*Q133 (Dynamic Memory Allocation)
Write a program to allocate memory dynamically for an array and find its sum.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
15*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) sum += arr[i];
    printf("%d", sum);
    free(arr);
    return 0;
}