#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char* nome;
    int isDead;
    int kills;
    struct node* next;
} NODE;

typedef struct dict{
    int length;
    
    NODE* inicio;
} DICT;

DICT* makeDict();
NODE* createNode();
void dictAdd(DICT*, char*);
void showDict(DICT*);
void printRec(NODE*);

int main(){
    DICT* dicionario = makeDict();
    char killer[11] = {'\0'}, victim[11] = {'\0'};

    while(scanf("%s", killer) != EOF){
        while((getchar())!='\n');
        dictAdd(dicionario, killer);
        scanf("%s", victim);
        if(strcmp(killer, victim) == 0) break;
    }

    showDict(dicionario);

    system("PAUSE");
    return 0;
}

DICT* makeDict(){
    DICT* d = (DICT*) malloc(sizeof(DICT));
    d->length = 0;
    d->inicio = NULL;
    return d;
}

NODE* createNode(){
    NODE* p = (NODE*) malloc(sizeof(NODE));
    p->isDead = 0;
    p->kills = 0;
    p->next = NULL;
    p->nome = NULL;
}

void dictAdd(DICT* d, char* palavra){
    if(d->inicio == NULL){
        NODE* p = createNode();
        strcpy(p->nome, palavra);
        
        d->inicio = p;
        d->length = 1;
        return;
    }

    int i;

    NODE* aux = d->inicio;
    for(i = 0; i < d->length; i++){
        if(aux->next == NULL) break;
        aux = aux->next;
    }

    NODE* n = createNode();
    strcpy(n->nome, palavra);

    aux->next = n;
    d->length++;
}

void showDict(DICT* d){
    printf("HALL OF MURDERERS %d\n", d->length);
    printRec(d->inicio);
}

void printRec(NODE* p){
    if(p == NULL) return;
    printf("%s %d\n", p->nome, p->kills);
    printRec(p->next);
}