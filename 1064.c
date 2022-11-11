#include <stdio.h>

int main() {
    int i, div = 0, posi = 0;
    double x, media = 0;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &x);
        if (x > 0) {
            media += x;
            div++;
            posi++;
        }
    }
    printf("%d valores positivos\n%.1lf\n", posi, media / div);

    return 0;
}