#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char info;
    struct node*  next;
} NODE;

typedef struct stack{
    struct node* top;
    struct node* comeco;
} STACK;

void insereLista(STACK*, char*);
int verificaSub(NODE*, char*);
STACK* makeStack();
NODE* push(char);

int main(){
    int qtd, i, j;
    scanf("%d",&qtd);
    while((getchar())!='\n');
    for (i = 0; i < qtd; i++){
        char frase[1000] = {'\0'};
        gets(frase);

        STACK* fraseDinamica = makeStack();
        insereLista(fraseDinamica, frase);

        int qtd_queries;
        scanf("%d",&qtd_queries);
        while((getchar())!='\n');

        for(j=0; j<qtd_queries; j++){
            char query[100] = {'\0'};
            gets(query);

            printf("%s\n", verificaSub(fraseDinamica->comeco, query) ? "Yes" : "No");
        }
    }

    return 0;
}

void insereLista(STACK* p, char* str){
    int i;
    NODE* aux = (NODE*) malloc(sizeof(NODE));
    p->comeco = aux;
    for(i = 0; str[i]; i++){
        aux->next = push(str[i]);
        aux = aux->next;
    }

}

int verificaSub(NODE* frase, char* sub){
    int i = 0, achou = 0;

    NODE* aux = frase;

    while (aux != NULL){
        if(sub[i] == '\0'){
            achou = 1;
            break;
        }
        if(aux->info == sub[i]){
            i++;
        }
        aux = aux->next;
    }

    return achou;
}


STACK* makeStack(){
    STACK* p = (STACK*) malloc(sizeof(STACK));
    p->top = NULL;
    p->comeco = NULL;
    return p;
}

NODE* push(char value){
    NODE* new = (NODE*) malloc(sizeof(NODE));

    new->info = value;
    new->next = NULL;

    return new;
}