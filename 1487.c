#include <stdio.h>
#include <stdlib.h>

struct Brinquedo {
    int duracao;
    int pontuacao;
};

void ordenaBrinquedosDesc(struct Brinquedo* brinquedos, int tam) {
    int i, j;
    struct Brinquedo aux;
    for (i = 0; i < tam; i++) {
        for (j = i + 1; j < tam; j++) {
            if (brinquedos[i].pontuacao < brinquedos[j].pontuacao) {
                aux = brinquedos[i];
                brinquedos[i] = brinquedos[j];
                brinquedos[j] = aux;
            }
        }
    }
}

int melhorCombinacao(int tamanho, struct Brinquedo* brinquedos, int duracaoMax) {
    int melhor = -1;
    int i, j;
    ordenaBrinquedosDesc(brinquedos, tamanho);

    for (i = 0; i < tamanho; i++) {
        int pontosTemp = 0;
        int duracaoTemp = 0;
        for (j = i; j < tamanho; j++) {
            if (duracaoTemp + brinquedos[j].duracao <= duracaoMax) {
                duracaoTemp += brinquedos[j].duracao;
                pontosTemp += brinquedos[j].pontuacao;
                j--;  // Repete no mesmo brinquedo
            }
        }
        if (pontosTemp > melhor) {
            melhor = pontosTemp;
        }
    }

    return melhor;
}

int main() {
    int n, m, instancia = 1;
    scanf("%d %d", &n, &m);

    while (n != 0) {
        struct Brinquedo brinquedos[n];
        int aux;
        for (aux = 0; aux < n; aux++) {
            scanf("%d %d", &brinquedos[aux].duracao, &brinquedos[aux].pontuacao);
        }

        printf("Instancia %d\n", instancia);
        printf("%d\n", melhorCombinacao(n, brinquedos, m));
        printf("\n");

        scanf("%d %d", &n, &m);
        instancia++;
    }
    return 0;
}