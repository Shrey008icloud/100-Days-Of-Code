/*Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.
Show Sample Test Cases
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>

int main() {
    int a[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position
    pos = 0;
    while (pos < n && a[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the element
    a[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}