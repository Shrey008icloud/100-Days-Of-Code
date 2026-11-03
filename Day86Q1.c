/*Q136 (Linked List)
Write a program to create and display a singly linked list.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
Output 1:
1 -> 2 -> 3 -> 4 -> 5 -> NULL*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    int n, i, val;
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val; newNode->next = NULL;
        if (!head) head = tail = newNode;
        else { tail->next = newNode; tail = newNode; }
    }
    struct Node *curr = head;
    while (curr) { printf("%d -> ", curr->data); curr = curr->next; }
    printf("NULL");
    return 0;
}