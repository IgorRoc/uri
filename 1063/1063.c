#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char info;
    struct node *next;
    struct node *previous;
} NODE;

typedef struct stack{
    NODE* first;
    NODE* top;
    int length;
} STACK;

STACK* makeStack();
NODE* createNode();
void push(STACK*, char);
char pop(STACK*);
STACK* invert(STACK*);
void printPilha(STACK*);
void printPilhaRec(NODE*);
void verificaEstacao(STACK*, STACK*);

int main(){
    int qtd_letras, i;
    char c;


    scanf("%d", &qtd_letras);
    fflush(stdin);

    while(qtd_letras != 0){
        STACK* vagao = makeStack();
        STACK* objetivo = makeStack();

        for(i = 0; i < qtd_letras; ){
            scanf("%c", &c);
            if(c == '\n' || c == ' ' || c == '\0') continue;
            push(vagao, c);
            i++;
        }
        for(i = 0; i < qtd_letras; ){
            scanf("%c", &c);
            if(c == '\n' || c == ' ' || c == '\0') continue;
            push(objetivo, c);
            i++;
        }

        verificaEstacao(invert(vagao), invert(objetivo));

        scanf("%d",&qtd_letras);
        fflush(stdin);
    }

    return 0;
}

STACK* makeStack(){
    STACK* s = (STACK*) malloc(sizeof(STACK));
    s->first = NULL;
    s->top = NULL;
    s->length = 0;
    return s;
}

NODE* createNode(){
    NODE* n = (NODE*) malloc(sizeof(NODE));
    n->info = '\0';
    n->next = NULL;
    n->previous = NULL;
    return n;
}

void push(STACK* s, char c){
    NODE* n = createNode();
    n->info = c;
    if(s->top != NULL){
        s->top->next = createNode();
        s->top->next = n;
        n->previous = s->top;
    }else{
        s->first = n;
    }
    s->top = n;
    s->length++;
}

char pop(STACK* s){
    if(s->top == NULL) return '\0';

    NODE* preLast = s->top->previous;
    char c = s->top->info;

    if(preLast != NULL){
        s->top->info = '\0';
        s->top = preLast;
        s->top->next = NULL;
    }else{
        s->first = NULL;
        s->top = NULL;
    }

    s->length--;

    return c;
}

char getTop(STACK* s){
    if(s->top == NULL) return '\0';
    char c = pop(s);

    push(s, c);

    return c;
}

STACK* invert(STACK* s){
    STACK* inverted = makeStack();

    while(s->top != NULL){
        push(inverted, pop(s));
    }

    return inverted;
}

void printPilha(STACK* s){
    printPilhaRec(s->first);
    printf("\n");
}

void printPilhaRec(NODE* n){
    if(n == NULL) return;
    if(n->next == NULL){
        printf("%c", n->info);
        return;
    }
    printf("%c ", n->info);
    printPilhaRec(n->next);
}

void verificaEstacao(STACK* vagao, STACK* objetivo){
    STACK* estacao = makeStack();
    STACK* finalizado = makeStack();
    
    push(estacao, pop(vagao));
    printf("I");  
    
    while(vagao->top != NULL){
        if(estacao->top == NULL){
            printf("I");
            push(estacao, pop(vagao));
            continue;
        }
        if(estacao->top->info == objetivo->top->info){
            printf("R");
            push(finalizado, pop(estacao));
            pop(objetivo);
        }else{
            printf("I");
            push(estacao, pop(vagao));
        }
    }

    while(estacao->top != NULL){
        if(estacao->top->info != objetivo->top->info){
            printf(" Impossible\n");
            return;
        }
        push(finalizado, pop(estacao));
        pop(objetivo);
        printf("R");
    }

    printf("\n");
}