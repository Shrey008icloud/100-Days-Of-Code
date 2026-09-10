/*Q57 (Arrays (1D))
Find the sum of array elements.
Show Sample Test Cases
Input 1:
4
2 4 6 8
Output 1:
20
Input 2:
3
1 1 1
Output 2:
3
*/
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}