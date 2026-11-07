/*Q140 (Linked List)
Write a program to reverse a linked list.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
5 -> 4 -> 3 -> 2 -> 1 -> NULL*/
#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

int main() {
    int n, i, val;
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        struct Node *nd = (struct Node*)malloc(sizeof(struct Node));
        nd->data = val; nd->next = NULL;
        if (!head) head = tail = nd;
        else { tail->next = nd; tail = nd; }
    }
    struct Node *prev = NULL, *curr = head, *next;
    while (curr) { next = curr->next; curr->next = prev; prev = curr; curr = next; }
    head = prev;
    curr = head;
    while (curr) { printf("%d -> ", curr->data); curr = curr->next; }
    printf("NULL");
    return 0;
}