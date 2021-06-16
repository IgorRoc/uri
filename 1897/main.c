#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int info;
    int nivel;

    struct node* op1;
    struct node* op2;
    struct node* op3;
    struct node* op4;
    struct node* op5;
    struct node* op6;
} NODE;

NODE* createnode(int, int);
NODE* maketree(int);
int insereArvoreRec(NODE*, int, int);

int main(){
    int n, m;

    // scanf("%d %d", &n, &m);
    n=10;
    m=15;

    NODE* p, *tree;
    tree = maketree(n);

    int nivel = 0;
    nivel = insereArvoreRec(tree, 0, m);

    printf("%d\n", nivel);

    // system("PAUSE");
    return 0;
}

NODE* createnode(int valor, int nivel){
    NODE* p;
    p = (NODE*) malloc(sizeof(NODE));

    p->info = valor;
    p->nivel = nivel;
    p->op1 = NULL;
    p->op2 = NULL;
    p->op3 = NULL;
    p->op4 = NULL;
    p->op5 = NULL;
    p->op6 = NULL;

    return p;
}

NODE* maketree(int x){
    NODE* p = createnode(x, 0);
    return p;
}

int insereArvoreRec(NODE* n, int nivelAtual, int objetivo){
    printf("[%d] [%d] [%d]\n",n->info, nivelAtual, objetivo);

    if(n->info == objetivo){
        printf("---- (%d) (%d) (%d)\n", n->info, nivelAtual, objetivo);
        return nivelAtual;
    }

    printf("passou\n");

    nivelAtual++;
    n->op1 = createnode(n->info * 2, nivelAtual);
    n->op2 = createnode(n->info * 3, nivelAtual);
    n->op3 = createnode(n->info / 2, nivelAtual);
    n->op4 = createnode(n->info / 3, nivelAtual);
    n->op5 = createnode(n->info + 7, nivelAtual);
    n->op6 = createnode(n->info - 7, nivelAtual);

    if( n->op1->info == objetivo || n->op2->info == objetivo || n->op3->info == objetivo || n->op4->info == objetivo || n->op5->info == objetivo || n->op6->info == objetivo){
        printf("---- (%d) (%d) (%d)\n", n->info, nivelAtual, objetivo);
        return nivelAtual;
    }

    if(objetivo > n->op1->info)
        insereArvoreRec(n->op1, nivelAtual, objetivo);

    if(objetivo > n->op2->info)
        insereArvoreRec(n->op2, nivelAtual, objetivo);

    if(objetivo < n->op3->info)
        insereArvoreRec(n->op3, nivelAtual, objetivo);

    if(objetivo < n->op4->info)
        insereArvoreRec(n->op4, nivelAtual, objetivo);

    if(objetivo > n->op5->info)
        insereArvoreRec(n->op5, nivelAtual, objetivo);

    if(objetivo < n->op4->info)
        insereArvoreRec(n->op6, nivelAtual, objetivo);
}