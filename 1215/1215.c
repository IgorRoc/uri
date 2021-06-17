#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char* palavra;
    int tamanho;
    struct node* right;
    struct node* left;
} NODE;

int main(){
    char texto[200] = {'\0'};

    gets(texto);

    transformaEmArvore(texto);

    system("PAUSE");
    return 0;
}

NODE* transformaEmArvore(char* frase){
    NODE* lista, *p, *q;
    int i = 0;

    lista = (NODE*) malloc(sizeof(NODE));

    while(frase[i] != '\0') {
        p = q = lista;
        while(frase[i] != info(p) && q != NULL){
            p = q;
            if (frase[i] < info(p))
                q = left(p);

            else
                q = right(p);
        }

        if (frase[i] < info(p))
            setleft(p, frase[i]);

        else
            setright(p, frase[i]);

        i++;
    }
}

NODE* maketree(char* x, int tam){
    NODE* p = createnode();
    p->palavra = x;
    p->tamanho = tam;
    return p;
}

void setright(NODE* p, char* x, int tam){
    if(p == NULL || p->right != NULL){
        return;
    }
    p->right = createnode();
    p->right->palavra = x;
    p->right->tamanho = tam;
}

void setleft(NODE* p, char* x, int tam){
    if(p == NULL || p->left != NULL){
        return;
    }
    p->left = createnode();
    p->left->palavra = x;
    p->left->tamanho = tam;
}

NODE* createnode(){
    NODE* p;
    p = (NODE*) malloc(sizeof(NODE));
    p->left = NULL;
    p->right = NULL;
    p->palavra = '\0';
    p->tamanho = -1;
    return p;
}

int getTamanho(char* palavra){
    int tamanho = 0, i;
    for(i = 0; palavra[i] != ' '; i++){
        tamanho++;
    }
    return tamanho;
}