#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tam, numeros[306 * 1000] = {0}, teste;
    int i, j, passada, posivet;
    while (scanf("%d", &tam) != EOF) {
        passada = 2;
        for (i = 0; i < 306000; i++) {
            numeros[i] = 0;
        }

        for (i = 0; i < tam; i++) {
            scanf("%d", &numeros[i]);
        }
        scanf("%d", &teste);
        for (i = 0; numeros[i]; i++) {
            if (numeros[i] == teste)
                posivet = i;
        }
        while (posivet >= passada - 1 && posivet != -1) {
            posivet = -1;
            for (i = passada - 1; numeros[i] != 0; i += passada - 1) {
                for (j = i; numeros[j] != 0; j++) {
                    numeros[j] = numeros[j + 1];
                }
            }
            for (i = 0; numeros[i] != 0; i++) {
                if (numeros[i] == teste) {
                    posivet = i;
                    break;
                }
            }
            passada++;
        }

        if (posivet == -1) {
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }
    return 0;
}
