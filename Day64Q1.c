/*Q114 (Functions)
Write a function to perform binary search on a sorted array.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2*/
#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, a[100], key, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    int idx = binarySearch(a, n, key);
    if (idx != -1) printf("Found at index %d", idx);
    else printf("Not Found");
    return 0;
}