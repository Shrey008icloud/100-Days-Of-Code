/*Q138 (Linked List)
Write a program to delete a node from a linked list.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
3
Output 1:
1 -> 2 -> 4 -> 5 -> NULL*/
#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

int main() {
    int n, i, val, del;
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        struct Node *nd = (struct Node*)malloc(sizeof(struct Node));
        nd->data = val; nd->next = NULL;
        if (!head) head = tail = nd;
        else { tail->next = nd; tail = nd; }
    }
    scanf("%d", &del);
    if (head && head->data == del) { struct Node *tmp = head; head = head->next; free(tmp); }
    else {
        struct Node *curr = head;
        while (curr->next && curr->next->data != del) curr = curr->next;
        if (curr->next) { struct Node *tmp = curr->next; curr->next = tmp->next; free(tmp); }
    }
    struct Node *curr = head;
    while (curr) { printf("%d -> ", curr->data); curr = curr->next; }
    printf("NULL");
    return 0;
}