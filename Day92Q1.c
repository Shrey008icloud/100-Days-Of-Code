/*Q142 (Stack)
Write a program to check balanced parentheses using a stack.
Show Sample Test Cases
Input 1:
{[()]}
Output 1:
Balanced
Input 2:
{[(])}
Output 2:
Not Balanced*/
#include <stdio.h>

char stack[200];
int top = -1;

int main() {
    char s[200];
    int balanced = 1;
    scanf("%s", s);
    for (int i = 0; s[i] && balanced; i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[') stack[++top] = s[i];
        else {
            if (top < 0) { balanced = 0; break; }
            char c = stack[top--];
            if ((s[i]==')' && c!='(') || (s[i]=='}' && c!='{') || (s[i]==']' && c!='['))
                balanced = 0;
        }
    }
    if (top != -1) balanced = 0;
    printf("%s", balanced ? "Balanced" : "Not Balanced");
    return 0;
}