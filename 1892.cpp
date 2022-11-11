#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 15

long long int inversoes = 0;

typedef struct {
    char palavra[STRING_SIZE];
} Lista;

void divide(Lista*, int, int);
void mergeSort(Lista*, int, int, int);

int main() {
    int alunos = 0;

    while (scanf("%d", &alunos) != EOF) {
        Lista vetor[alunos];

        int i = 0;
        for (i = 0; i < alunos; i++) {
            scanf("%s", vetor[i].palavra);
        }

        divide(vetor, 0, alunos - 1);

        printf("%lld\n", inversoes);
        inversoes = 0;
    }

    return 0;
}

void divide(Lista* vetor, int esquerda, int direita) {
    if (direita > esquerda) {
        int meio = (esquerda + direita) / 2;

        divide(vetor, esquerda, meio);
        divide(vetor, meio + 1, direita);
        mergeSort(vetor, esquerda, meio, direita);
    }
}

void mergeSort(Lista* vetor, int esquerda, int meio, int direita) {
    int auxEsquerdo = meio - esquerda + 1;
    int auxDireito = direita - meio;
    int i = 0, j = 0, k = esquerda;

    Lista vetorEsquerdo[auxEsquerdo], vetorDireito[auxDireito];

    for (i = 0; i < auxEsquerdo; i++) {
        strcpy(vetorEsquerdo[i].palavra, vetor[esquerda + i].palavra);
    }

    for (i = 0; i < auxDireito; i++) {
        strcpy(vetorDireito[i].palavra, vetor[meio + i + 1].palavra);
    }

    i = 0;
    j = 0;

    while (i < auxEsquerdo && j < auxDireito) {
        if (strcmp(vetorEsquerdo[i].palavra, vetorDireito[j].palavra) <= 0) {
            strcpy(vetor[k++].palavra, vetorEsquerdo[i++].palavra);
        } else {
            strcpy(vetor[k++].palavra, vetorDireito[j++].palavra);
            inversoes += auxEsquerdo - i;
        }
    }

    while (i < auxEsquerdo) {
        strcpy(vetor[k++].palavra, vetorEsquerdo[i++].palavra);
    }
    while (j < auxDireito) {
        strcpy(vetor[k++].palavra, vetorDireito[j++].palavra);
    }
}
