#include <stdio.h>

int main() {
    double x, reaj;
    scanf("%lf", &x);
    if (x >= 0 && x <= 400) {
        reaj = x * 0.15;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", x + reaj, reaj);
    } else if (x > 400 && x <= 800) {
        reaj = x * 0.12;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", x + reaj, reaj);
    } else if (x > 800 && x <= 1200) {
        reaj = x * 0.1;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", x + reaj, reaj);
    } else if (x > 1200 && x <= 2000) {
        reaj = x * 0.07;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", x + reaj, reaj);
    } else if (x > 2000) {
        reaj = x * 0.04;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", x + reaj, reaj);
    }

    return 0;
}
