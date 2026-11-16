/*Q149 (Searching)
Write a program to implement binary search recursively.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
4
Output 1:
Found at index 3*/
#include <stdio.h>

int bSearch(int a[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key) return mid;
    if (a[mid] < key) return bSearch(a, mid+1, high, key);
    return bSearch(a, low, mid-1, key);
}

int main() {
    int n, i, key;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    int idx = bSearch(a, 0, n-1, key);
    if (idx != -1) printf("Found at index %d", idx);
    else printf("Not Found");
    return 0;
}