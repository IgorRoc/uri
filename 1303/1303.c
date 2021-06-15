#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct jogo{
    int timeA;
    int timeB;
    int pontosA;
    int pontosB;
    struct jogo* left;
    struct jogo* right;
}JOGO;

int main(){
    int timeA, timeB, pontosA, pontosB;
    scanf("%d",&timeA);
    
    JOGO* jogos, *p, *q;

    scanf("%d %d %d %d",&timeA, &pontosA, &timeB, &pontosB);
    jogos = maketree(timeA, timeB, pontosA, pontosB);
    while(timeA != 0){
        p = q = jogos;
        while(pontosA != info(p) && q != NULL){
            p = q;

            if (pontosA < info(p))
                q = left(p);

            else
                q = right(p);
        }
        scanf("%d %d %d %d",&timeA, &pontosA, &timeB, &pontosB);
    }
    return 0;
}

JOGO* createnode(){
    JOGO* j;
    j = (JOGO*) malloc(sizeof(JOGO));
    j->timeA = -1;
    j->timeB = -1;
    j->pontosA = -1;
    j->pontosB = -1;
    j->left = NULL;
    j->right = NULL;
    return j;
}

JOGO* maketree(int timeA, int timeB, int pontosA, int pontosB){
    JOGO* j = createnode();
    j->timeA = timeA;
    j->timeB = timeB;
    j->pontosA = pontosA;
    j->pontosB = pontosB;
    j->left = NULL;
    j->right = NULL;
    return j;
}

void setright(JOGO* j, int timeA, int timeB, int pontosA, int pontosB){
    if(j == NULL || j->right != NULL){
        return;
    }
    j->right = createnode();
    j->right->timeA = timeA;
    j->right->timeB = timeB;
    j->right->pontosA = pontosA;
    j->right->pontosB = pontosB;
}

void setleft(JOGO* j, int timeA, int timeB, int pontosA, int pontosB){
    if(j == NULL || j->left != NULL){
        return;
    }
    j->left = createnode();
    j->left->timeA = timeA;
    j->left->timeB = timeB;
    j->left->pontosA = pontosA;
    j->left->pontosB = pontosB;
}