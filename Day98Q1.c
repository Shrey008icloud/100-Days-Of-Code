/*Q148 (Searching)
Write a program to implement linear search.
Show Sample Test Cases
Input 1:
5
10 20 30 40 50
30
Output 1:
Found at index 2
Input 2:
5
10 20 30 40 50
60
Output 2:
Not Found*/
#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) { printf("Found at index %d", i); return 0; }
    }
    printf("Not Found");
    return 0;
}