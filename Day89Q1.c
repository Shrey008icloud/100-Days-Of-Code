/*Q139 (Linked List)
Write a program to find the length of a linked list.
Show Sample Test Cases
Input 1:
5
10 20 30 40 50
Output 1:
5*/
#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

int main() {
    int n, i, val, len = 0;
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        struct Node *nd = (struct Node*)malloc(sizeof(struct Node));
        nd->data = val; nd->next = NULL;
        if (!head) head = tail = nd;
        else { tail->next = nd; tail = nd; }
    }
    struct Node *curr = head;
    while (curr) { len++; curr = curr->next; }
    printf("%d", len);
    return 0;
}