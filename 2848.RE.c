#include <stdio.h>
#include <stdlib.h>

void clearArray(long int*, long int);
long int buscaMaior(long int*, int);
long int* buscaMenor(long int*, int, int, int, int);

int main() {
    int tam, rodadas;
    int i;

    scanf("%d %d", &tam, &rodadas);
    while ((getchar()) != '\n')
        ;

    long int* vetor = (long int*)malloc(tam * sizeof(long int));

    for (i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }

    int L, R, K;
    long int G, D;

    for (i = 0; i < rodadas; i++) {
        scanf("%d %d %d %ld %ld", &L, &R, &K, &G, &D);

        while ((getchar()) != '\n')
            ;
        long int* resposta = buscaMenor(vetor, tam, L, R, K);

        long int proximidadeG = abs(resposta[1] - G);
        long int proximidadeD = abs(resposta[1] - D);

        char quemAcertou = (proximidadeG < proximidadeD) ? 'G' : ((proximidadeD < proximidadeG) ? 'D' : 'E');
        printf("%ld %ld %c\n", resposta[0], resposta[1], quemAcertou);
    }

    return 0;
}

long int* buscaMenor(long int* vetor, int tam, int min, int max, int K) {
    long int maiorValor = buscaMaior(vetor, tam), i;
    long int* vezesDeCadaNumero = (long int*)malloc(maiorValor * sizeof(long int));
    int existeNum = 0;
    clearArray(vezesDeCadaNumero, maiorValor);

    for (i = min - 1; i < max; i++) {
        vezesDeCadaNumero[vetor[i] - 1]++;
    }

    for (i = 0; i < maiorValor; i++) {
        if (vezesDeCadaNumero[i] > 0) {
            existeNum += vezesDeCadaNumero[i];
        }
        if (existeNum >= K) {
            long int* resposta = (long int*)malloc(2 * sizeof(long int));
            resposta[0] = i + 1;
            resposta[1] = vezesDeCadaNumero[i];
            return resposta;
        }
    }

    long int* resposta = (long int*)malloc(2 * sizeof(long int));
    resposta[0] = resposta[1] = 0;

    return resposta;
}

long int buscaMaior(long int* vetor, int tam) {
    long int maior = 0, i;

    for (i = 0; i < tam; i++) {
        if (vetor[i] > maior) maior = vetor[i];
    }

    return maior;
}

void clearArray(long int* vetor, long int tam) {
    long int i;
    for (i = 0; i < tam; i++) {
        vetor[i] = 0;
    }
}