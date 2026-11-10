/*Q143 (Queue)
Write a program to implement a queue using an array.
Show Sample Test Cases
Input 1:
3
enqueue 1
enqueue 2
dequeue
Output 1:
Dequeued: 1*/
#include <stdio.h>

#define MAX 100
int queue[MAX], front = 0, rear = -1;

void enqueue(int val) { if (rear < MAX-1) queue[++rear] = val; }
int dequeue() { if (front <= rear) return queue[front++]; return -1; }

int main() {
    int n, val; char op[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        if (op[0] == 'e') { scanf("%d", &val); enqueue(val); }
        else printf("Dequeued: %d\n", dequeue());
    }
    return 0;
}