#include <stdio.h>

int main() {
    int matriz[130][130] = {0};
    int num, fim;
    while (scanf("%d", &num) != EOF) {
        int i, j;
        for (i = 0; i < num; i++) {
            matriz[i][i] = 2;
        }

        for (i = num - 1, j = 0; i >= 0; i--, j++) {
            matriz[i][j] = 3;
        }

        fim = num - (num / 3);
        for (i = num / 3; i < fim; i++)
            for (j = num / 3; j < fim; j++)
                matriz[i][j] = 1;

        matriz[(num / 2)][(num / 2)] = 4;
        for (i = 0; i < num; i++) {
            for (j = 0; j < num; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < 130; i++)
            for (j = 0; j < 130; j++)
                matriz[i][j] = 0;
    }

    return 0;
}
