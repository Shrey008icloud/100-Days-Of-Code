/*Q113 (Functions)
Write a function to sort an array using bubble sort.
Show Sample Test Cases
Input 1:
5
5 3 1 4 2
Output 1:
1 2 3 4 5*/
#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1]) { temp=a[j]; a[j]=a[j+1]; a[j+1]=temp; }
}

int main() {
    int n, a[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    bubbleSort(a, n);
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}