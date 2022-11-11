#include <stdio.h>

int main() {
    int colunas, max, i, j;
    scanf("%d %d", &colunas, &max);
    for (i = 1; i <= max; i++) {
        printf("%d", i);
        if (i % colunas == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}