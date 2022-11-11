#include <stdio.h>

int main() {
    int tam, i;
    double n1, n2, n3;
    scanf("%d", &tam);
    for (i = 0; i < tam; i++) {
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        printf("%.1lf\n", ((2 * n1) + (3 * n2) + (5 * n3)) / 10);
    }

    return 0;
}