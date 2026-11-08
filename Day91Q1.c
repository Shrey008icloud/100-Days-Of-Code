/*Q141 (Stack)
Write a program to implement a stack using an array.
Show Sample Test Cases
Input 1:
3
push 1
push 2
pop
Output 1:
Popped: 2*/
#include <stdio.h>

#define MAX 100
int stack[MAX], top = -1;

void push(int val) { if (top < MAX-1) stack[++top] = val; }
int pop() { if (top >= 0) return stack[top--]; return -1; }

int main() {
    int n, val; char op[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        if (op[1] == 'u') { scanf("%d", &val); push(val); }
        else printf("Popped: %d\n", pop());
    }
    return 0;
}