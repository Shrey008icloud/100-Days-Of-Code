/*Q65 (Arrays (1D))
Search in a sorted array using binary search.
Show Sample Test Cases
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>

int main() {
    int a[100], n, i, search;
    int low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == search) {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (a[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0)
        printf("Element not found");

    return 0;
}