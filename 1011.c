#include <stdio.h>

int main() {
    double R, total, pi = 3.14159;
    scanf("%lf", &R);
    total = (4.0 / 3) * pi * R * R * R;
    printf("VOLUME = %.3lf\n", total);

    return 0;
}