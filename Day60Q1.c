/*Q110 (Functions)
Write a function to find whether a number is Armstrong or not.
Show Sample Test Cases
Input 1:
153
Output 1:
Armstrong
Input 2:
100
Output 2:
Not Armstrong*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) { sum += pow(temp % 10, digits); temp /= 10; }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", isArmstrong(n) ? "Armstrong" : "Not Armstrong");
    return 0;
}