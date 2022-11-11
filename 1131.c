#include <stdio.h>

int main() {
    int g = 0, i = 0, e = 0, c = 0, n = 1;
    int x, y;
    while (n == 1) {
        c++;
        scanf("%d%d", &x, &y);
        if (x > y) {
            i++;
        } else if (y > x) {
            g++;
        } else {
            e++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
    }
    printf("%d grenais\n", c);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", e);
    if (g > i) {
        printf("Gremio venceu mais\n");
    } else if (i > g) {
        printf("Inter venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}