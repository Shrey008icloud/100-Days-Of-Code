/*Q137 (Linked List)
Write a program to insert a node at the beginning of a linked list.
Show Sample Test Cases
Input 1:
3
1 2 3
0
Output 1:
0 -> 1 -> 2 -> 3 -> NULL*/
#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

struct Node* newNode(int val) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = val; n->next = NULL; return n;
}

int main() {
    int n, i, val;
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        struct Node *nd = newNode(val);
        if (!head) head = tail = nd;
        else { tail->next = nd; tail = nd; }
    }
    scanf("%d", &val);
    struct Node *nd = newNode(val);
    nd->next = head; head = nd;
    struct Node *curr = head;
    while (curr) { printf("%d -> ", curr->data); curr = curr->next; }
    printf("NULL");
    return 0;
}