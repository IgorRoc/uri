#include <math.h>
#include <stdio.h>

#define PI 3.14159

int main() {
    double area, r;
    scanf("%lf", &r);
    area = PI * pow(r, 2);
    printf("A=%.4lf", area);
    printf("\n");

    return 0;
}