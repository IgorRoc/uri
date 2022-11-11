#include <stdio.h>
#include <stdlib.h>

void bubblesort(int*, int, int*, int);

int main() {
    int n, m, x;
    int *vet, *iteracoes;

    scanf("%d %d", &n, &m);

    while (n != 0 || m != 0) {
        vet = (int*)malloc(sizeof(int) * n);
        iteracoes = (int*)malloc(sizeof(int) * m);

        int i;
        for (i = 0; i < n; i++) {
            vet[i] = i + 1;
        }

        for (i = 0; i < m; i++) {
            scanf("%d", &iteracoes[i]);
        }

        bubblesort(vet, n, iteracoes, m);

        int printMax = n - 1;
        for (i = 0; i < printMax; i++) {
            printf("%d ", vet[i]);
        }
        printf("%d\n", vet[i]);

        scanf("%d %d", &n, &m);

        free(vet);
        free(iteracoes);
    }

    return 0;
}

void bubblesort(int* vet, int tam, int* iteracoes, int tam_ite) {
    int i, j, k, trocas, indiceParaTrocar, calculoIndice;
    for (i = 0; i < tam_ite; i++) {
        trocas = 0;
        indiceParaTrocar = 1;
        if (iteracoes[i] == 0 || iteracoes[i] >= tam) continue;

        for (j = 1; j < tam; j++) {
            calculoIndice = j - indiceParaTrocar;
            if (vet[j] > vet[calculoIndice]) {
                int aux = vet[calculoIndice];
                vet[calculoIndice] = vet[j];
                vet[j] = aux;
                trocas++;
            } else {
                indiceParaTrocar++;
            }
            if (trocas >= iteracoes[i]) {
                break;
            }
        }
    }
}