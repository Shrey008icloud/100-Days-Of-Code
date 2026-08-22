/*Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Input 1:
4 2 +
Output 1:
6
Input 2:
10 3 %
Output 2:
1
Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}