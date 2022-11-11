#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int info;
    struct node* next;
    struct node* previous;
} NODE;

typedef struct stack {
    struct node* top;
} STACK;

STACK* makeStack();
void push(STACK*, int);
int pop(STACK*);

int main() {
    int i, j, n;

    scanf("%d", &n);
    while ((getchar()) != '\n')
        ;

    for (i = 0; i < n; i++) {
        int deuRuim = 0, diamantes = 0;
        STACK* pilha = makeStack();
        char str[1000] = {'\0'};
        gets(str);
        for (j = 0; str[j]; j++) {
            if (str[j] == '<')
                push(pilha, '<');
            else if (str[j] == '>') {
                deuRuim = pop(pilha);
                if (!deuRuim) diamantes++;
            }
        }

        printf("%d\n", diamantes);
    }

    return 0;
}

void push(STACK* n, int value) {
    NODE* new = (NODE*)malloc(sizeof(NODE));

    new->info = value;
    new->next = NULL;
    new->previous = NULL;

    if (n->top == NULL) {
        n->top = new;
    } else {
        new->previous = n->top;
        n->top = new;
    }
}

int pop(STACK* n) {
    if (n->top == NULL) return 1;

    n->top = n->top->previous;
    if (n->top != NULL) {
        n->top->next = NULL;
    }

    return 0;
}

STACK* makeStack() {
    STACK* p = (STACK*)malloc(sizeof(STACK));
    p->top = NULL;
    return p;
}