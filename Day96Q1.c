/*Q146 (Sorting)
Write a program to sort an array using merge sort.
Show Sample Test Cases
Input 1:
6
5 2 4 6 1 3
Output 1:
1 2 3 4 5 6*/
#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int L[n1], R[n2], i, j, k;
    for (i=0;i<n1;i++) L[i]=a[l+i];
    for (j=0;j<n2;j++) R[j]=a[m+1+j];
    i=0; j=0; k=l;
    while(i<n1&&j<n2) a[k++]=(L[i]<=R[j])?L[i++]:R[j++];
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l<r) { int m=(l+r)/2; mergeSort(a,l,m); mergeSort(a,m+1,r); merge(a,l,m,r); }
}

int main() {
    int n, i; scanf("%d",&n);
    int a[100]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}