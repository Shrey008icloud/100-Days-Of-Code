/*Q72 (Arrays (1D))
Write a program to find the frequency of each element in an array.
Show Sample Test Cases
Input 1:
5
1 2 2 3 1
Output 1:
1 occurs 2 times
2 occurs 2 times
3 occurs 1 times*/
#include <stdio.h>

int main() {
    int a[100], visited[100], n, i, j, count;
    scanf("%d", &n);
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); visited[i] = 0; }

    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (a[j] == a[i]) { count++; visited[j] = 1; }
            }
            printf("%d occurs %d times\n", a[i], count);
        }
    }
    return 0;
}