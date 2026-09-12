/*Q67 (Arrays (1D))
Insert an element in an array at a given position.
Show Sample Test Cases
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40*/
#include <stdio.h>

int main() {
    int a[100], n, pos, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &element);

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}