/*Q125 (Structures)
Write a program to calculate distance between two points using structure.
Show Sample Test Cases
Input 1:
0 0 3 4
Output 1:
5.00*/
#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};

int main() {
    struct Point p1, p2;
    scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);
    float dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("%.2f", dist);
    return 0;
}