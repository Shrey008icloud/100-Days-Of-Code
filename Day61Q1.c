/*Q111 (Functions)
Write a function to convert decimal to binary.
Show Sample Test Cases
Input 1:
10
Output 1:
1010*/
#include <stdio.h>

void decToBin(int n) {
    if (n > 1) decToBin(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    decToBin(n);
    return 0;
}