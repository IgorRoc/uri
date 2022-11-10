#include <stdio.h>

int main() {
    double x, reaj;
    scanf("%lf", &x);
    if (x >= 0 && x <= 2000) {
        printf("Isento\n");
    } else if (x > 2000 && x <= 3000) {
        reaj = (x - 2000) * 0.08;
        printf("R$ %.2lf\n", reaj);
    } else if (x > 3000 && x <= 4500) {
        reaj = 1000 * 0.08 + (x - 3000) * 0.18;
        printf("R$ %.2lf\n", reaj);
    } else if (x > 4500) {
        reaj = 1000 * 0.08 + 1500 * 0.18 + (x - 4500) * 0.28;
        printf("R$ %.2lf\n", reaj);
    }

    return 0;
}
