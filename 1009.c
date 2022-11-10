#include <stdio.h>

int main() {
    char nome[20];
    double a, b, total;
    scanf("%s", &nome);
    scanf("%lf", &a);
    scanf("%lf", &b);
    total = a + (b * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}