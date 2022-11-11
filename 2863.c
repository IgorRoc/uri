#include <stdio.h>

int main() {
    int tam, i;
    while (scanf("%d", &tam) != EOF) {
        double tent, fast;
        for (i = 0; i < tam; i++) {
            scanf("%lf", &tent);
            if (i == 0) {
                fast = tent;
            } else if (tent < fast) {
                fast = tent;
            }
        }
        printf("%.2lf\n", fast);
    }

    return 0;
}
