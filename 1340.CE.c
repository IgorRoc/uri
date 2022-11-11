#include <stdio.h>
#include <stdlib.h>

int* busca(int*, int, int);
void apagar(int*, int, int);
void realocaRec(int*, int, int);

int main() {
    int iteracoes;

    scanf("%d", &iteracoes);

    while (iteracoes != 0) {
        int* operacoes = (int*)malloc(2 * iteracoes * sizeof(int));
        int comeco = 0, fim = 0;
        int chanceFila = 0, chancePilha = 0, chancePriority = 0, impossible = 0;

        for (int i = 0; i < iteracoes; i++) {
            scanf("%d %d", &operacoes[i * iteracoes + 0], &operacoes[i * iteracoes + 1]);
        }

        for (int i = 0; i < iteracoes; i++) {
            int* indice = busca(operacoes, iteracoes, operacoes[i * iteracoes + 1]);

            if (indice[0] == -1) {
                printf("impossible\n");
                impossible++;
                break;
            }

            if (operacoes[i * iteracoes] == 1) {
                fim++;
            } else if (operacoes[i * iteracoes] == 2) {
                printf("[%d|%d]\n", indice[0], fim);
                if (indice[1] == 2) {
                    printf("impossible\n");
                    impossible++;
                    break;
                }

                apagar(operacoes, iteracoes, indice[0]);

                if (indice[0] == fim - 1) {
                    fim--;
                    chancePilha++;
                } else if (indice[0] == comeco) {
                    comeco++;
                    chanceFila++;
                } else {
                    chancePriority += 2;
                }
            }

            free(indice);
        }

        if (!impossible) {
            if (chancePilha > chanceFila) {
                if (chancePriority == chancePilha) {
                    printf("stack\n");
                } else if (chancePriority > chancePilha) {
                    printf("priority queue\n");
                } else {
                    printf("not sure\n");
                }
            } else if (chanceFila > chancePilha) {
                if (chancePriority == chancePilha) {
                    printf("queue\n");
                } else if (chancePriority > chanceFila) {
                    printf("priority queue\n");
                } else {
                    printf("not sure\n");
                }
            } else {
                if (chancePriority == chanceFila) {
                    printf("not sure\n");
                } else {
                    printf("priority queue\n");
                }
            }
        }

        scanf("%d", &iteracoes);
    }
    return 0;
}

int* busca(int* vet, int tam, int valor) {
    int i, j, achou = 0;

    int* indice = (int*)malloc(2 * sizeof(int));
    indice[0] = -1;
    indice[1] = -1;

    for (i = 0; i < tam - 1; i++) {
        if (vet[i * tam + 1] == valor) {
            achou = i;
        }
    }

    if (achou) {
        indice[0] = achou;
        indice[1] = 1;
    }

    return indice;
}

void apagar(int* vet, int tam, int indice) {
    vet[indice * tam + 0] = -1;
    vet[indice * tam + 1] = -1;
    realocaRec(vet, tam - 1, indice);
}

void realocaRec(int* vet, int tam, int indice) {
    if (indice >= tam) return;

    int auxA = vet[indice * tam + 0], auxB = vet[indice * tam + 1];
    vet[indice * tam + 0] = vet[(indice + 1) * tam + 0];
    vet[indice * tam + 1] = vet[(indice + 1) * tam + 1];
    vet[(indice + 1) * tam + 0] = auxA;
    vet[(indice + 1) * tam + 1] = auxB;

    realocaRec(vet, tam, indice + 1);
}