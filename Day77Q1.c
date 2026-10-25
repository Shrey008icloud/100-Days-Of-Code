/*Q127 (Structures)
Write a program to add two complex numbers using structure.
Show Sample Test Cases
Input 1:
2 3 4 5
Output 1:
6 + 8i*/
#include <stdio.h>

struct Complex {
    float real, imag;
};

int main() {
    struct Complex c1, c2, sum;
    scanf("%f %f %f %f", &c1.real, &c1.imag, &c2.real, &c2.imag);
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("%.0f + %.0fi", sum.real, sum.imag);
    return 0;
}