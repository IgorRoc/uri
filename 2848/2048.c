#include <stdio.h>
#include <stdlib.h>

int* buscaMenor(int*, int, int, int);

int main(){
    int tam, rodadas;
    int i;

    scanf("%d %d", &tam, &rodadas);
    while((getchar())!='\n');

    int* vetor = (int*) malloc(tam*sizeof(int));

    for(i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }

    int L, R, K, G, D;
    for(i = 0; i <rodadas; i++){
        scanf("%d %d %d %d %d", &L, &R, &K, &G, &D);
        while((getchar())!='\n');
        int* resposta = buscaMenor(vetor, L, R, K);

        int proximidadeG = abs(resposta[1] - G);
        int proximidadeD = abs(resposta[1] - D);

        char quemAcertou = (proximidadeG < proximidadeD) ? 'G' : ((proximidadeD < proximidadeG) ? 'D' : 'E');
        printf("%d %d %c\n", resposta[0], resposta[1], quemAcertou);
    }

    return 0;
}

int* buscaMenor(int* vetor, int min, int max, int K){
    int vezesDeCadaNumero[10] = {0}, existeNum = 0;
    int i;

    for(i = min-1; i < max ; i++){
        vezesDeCadaNumero[vetor[i]-1]++;
    }

    for(i = 0; i <= max; i++){
        if(vezesDeCadaNumero[i] > 0){
            existeNum += vezesDeCadaNumero[i];
        }
        if(existeNum >= K){
            int* resposta = (int*) malloc(2*sizeof(int));
            resposta[0] = i+1;
            resposta[1] = vezesDeCadaNumero[i];
            return resposta;
        }
    }

    int* resposta = (int*) malloc(2*sizeof(int));
    resposta[0] = resposta[1] = 0;
    
    return resposta;
}