#include <stdio.h>
#include <stdlib.h>

void bubblesort(int*, int, int*, int);

int main(){
    int n, m, x;

    scanf("%d %d", &n, &m);

    while (n != 0 || m != 0){
        int* vet = (int*) malloc(sizeof(int) * n);
        int* iteracoes = (int*) malloc(sizeof(int) * m);

        int i;
        for (i = 0; i < n; i++){
            vet[i] = i+1;
        }

        for (i = 0; i < m; i++){
            scanf("%d", &iteracoes[i]);
        }

        bubblesort(vet, n, iteracoes, m);
        
        for(i = 0; i < n-1; i++){
            printf("%d ", vet[i]);
        }
        printf("%d\n\n", vet[i]);

        scanf("%d %d", &n, &m);
    }
    
    return 0;
}

void bubblesort(int* vet, int tam, int* iteracoes, int tam_ite){
    int i, j, k, trocas = 0;
    for(i = tam_ite; i > 0; i--){
        for(j = 0; j < iteracoes[i-1]; j++){
            // if(iteracoes[tam_ite-i] >= tam) continue;
            // if(trocas >= iteracoes[i-1]) break;
            // if(j+1 >= tam) continue;
            int aux = vet[i+j-1];
            vet[i+j-1] = vet[i+j-1];
            vet[i+j-1] = aux;
            trocas++;
            printf("[%d]", j);
        }
        trocas = 0;
        printf("[rodada %d]", i);
        for(int k = 0; k < tam; k++){
            printf("%d ", vet[k]);
        }
        printf("\n");
    }
}