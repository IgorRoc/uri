#include <stdio.h>

int main() {
    double x, y;
    int v = 1;
    while (v == 1) {
        scanf("%lf", &x);
        while (x < 0 || x > 10) {
            printf("nota invalida\n");
            scanf("%lf", &x);
        }
        scanf("%lf", &y);
        while (y < 0 || y > 10) {
            printf("nota invalida\n");
            scanf("%lf", &y);
        }
        printf("media = %.2lf\n", (x + y) / 2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &v);
        while (v > 2 || v < 1) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &v);
        }
    }

    return 0;
}