#include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    double vet[100] = {x};
    int i;
    printf("N[0] = %.4lf\n", vet[0]);
    for (i = 1; i < 100; i++) {
        vet[i] = vet[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }

    return 0;
}