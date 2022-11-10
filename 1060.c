#include <stdio.h>

int main() {
    double x;
    int aux = 0, i;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &x);
        if (x > 0) {
            aux++;
        }
    }
    printf("%d valores positivos\n", aux);
    return 0;
}