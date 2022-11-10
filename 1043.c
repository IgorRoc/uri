#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b && a > c) {
        if ((b + c) > a) {
            printf("Perimetro = %2.1lf\n", a + b + c);
        } else {
            printf("Area = %2.1lf\n", ((a + b) * c) / 2.0);
        }
    } else if (b > a && b > c) {
        if ((a + c) > b) {
            printf("Perimetro = %2.1lf\n", a + b + c);
        } else {
            printf("Area = %2.1lf\n", ((a + b) * c) / 2.0);
        }
    } else if (c > b && c > a) {
        if ((b + a) > c) {
            printf("Perimetro = %2.1lf\n", a + b + c);
        } else {
            printf("Area = %2.1lf\n", ((a + b) * c) / 2.0);
        }
    } else {
        if ((b + a) > c) {
            printf("Perimetro = %2.1lf\n", a + b + c);
        } else {
            printf("Area = %2.1lf\n", ((a + b) * c) / 2.0);
        }
    }

    return 0;
}
