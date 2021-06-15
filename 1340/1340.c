#include <stdio.h>
#include <stdlib.h>

int* busca(int**, int, int);
int maiorNo(int**, int);
int** iniciaMatriz(int, int);
void apagar(int**, int, int);
void realocaRec(int**, int, int);

int main(){
    int iteracoes;

    scanf("%d",&iteracoes);


    while(iteracoes != 0){
        int** operacoes = iniciaMatriz(iteracoes, 2);
        int comeco = 0, fim = 0;
        int chanceFila = 0, chancePilha = 0, chancePriority = 0, impossible = 0;
        int i;

        for (i = 0; i < iteracoes; i++){
            scanf("%d %d",&operacoes[i][0], &operacoes[i][1]);
        }

        for(i = 0; i < iteracoes; i++){
            if(operacoes[i][0] == 1){
                fim++;
            }
            else if(operacoes[i][0] == 2){
                int* indice = busca(operacoes, i, operacoes[i][1]);
                printf("Indice: %d %d\n", indice[0], indice[1]);

                if(indice[0] == -1){
                    printf("impossible -1\n");
                    impossible++;
                    break;
                }

                if(indice[1] == 2){
                    printf("impossible 2\n");
                    impossible++;
                    break;
                }
                
                apagar(operacoes, iteracoes, indice[0]);

                if(indice[0] == fim-1){
                    fim--;
                    chancePilha++;
                }
                if(indice[0] == comeco){
                    comeco++;
                    chanceFila++;
                }
                if(indice[0] == maiorNo(operacoes, i)){
                    chancePriority++;
                }
                free(indice);
            }

        }

        if(impossible){
            printf("(%d)\n", impossible);
            scanf("%d",&iteracoes);
            continue;
        }

        if(chancePriority == chanceFila && chancePriority == chancePilha){
            printf("not sure\n");
        }else if(chancePriority > chanceFila && chancePriority > chancePilha){
            printf("priority queue\n");

        }else if(chanceFila > chancePriority && chanceFila > chancePilha){
            printf("queue\n");
        }else if(chancePilha > chancePriority && chancePilha > chancePriority){
            printf("stack\n");
        }

        scanf("%d",&iteracoes);
    }
    return 0;
}

int* busca(int** mat, int tam, int valor){
    int i, j, achou = -1;

    int* indice = (int*) malloc(2*sizeof(int));
    indice[0] = -1;
    indice[1] = -1;

    for(i = 0; i < tam; i++){
        if(mat[i][1] == valor){
            achou = i;
        }
    }

    if(achou != -1){
        indice[0] = achou;
        indice[1] = 1;
    }

    return indice;
}

int maiorNo(int** mat, int tam){
    int maior = 0, i;
    for(i = 0; i < tam; i++){
        if(mat[i][0] == 1){
            printf("-[%d]\n", mat[i][1]);
            if(mat[i][1] >= maior){
                maior = mat[i][1];
            }
        }
    }
    printf("-- %d\n", maior);
    return maior;
}

void apagar(int** vet, int tam, int indice){
    vet[indice][0] = -1;
    vet[indice][1] = -1;
    realocaRec(vet, tam-1, indice);
}

int** iniciaMatriz(int x, int y){
    int** matriz = (int**) malloc(x * sizeof(int*));
    int i;
    for(i = 0; i < x; i++){
        matriz[i] = (int*) malloc(y * sizeof(int));
    }

    return matriz;
}

void realocaRec(int** mat, int tam, int indice){
    if(indice >= tam) return;

    int auxA = mat[indice][0], auxB = mat[indice][1];
    mat[indice][0] = mat[(indice+1)][0];
    mat[indice][1] = mat[(indice+1)][1];
    mat[(indice+1)][0] = auxA;
    mat[(indice+1)][1] = auxB;

    realocaRec(mat, tam, indice+1);
}