/*Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Show Sample Test Cases
Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 4, 3, 1};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}