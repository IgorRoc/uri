#include <stdio.h>

int main() {
    int x, y, som = 0;
    scanf("%d%d", &x, &y);
    if (y > x) {
        int aux = x;
        x = y;
        y = aux;
    }
    for (++y; y < x; y++) {
        if (y % 2 != 0) {
            som += y;
        }
    }
    printf("%d\n", som);

    return 0;
}
