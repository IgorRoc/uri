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
    char str[1000] = "";
    int i, deuRuim = 0;

    while (scanf("%s", str) != EOF) {
        STACK* pilha = makeStack();
        for (i = 0; str[i]; i++) {
            if (str[i] == '(')
                push(pilha, '(');
            else if (str[i] == ')') {
                deuRuim = pop(pilha);
                if (deuRuim) break;
            }
        }

        if (pilha->top == NULL) {
            if (deuRuim) {
                printf("incorrect\n");
            } else {
                printf("correct\n");
            }
        } else {
            printf("incorrect\n");
        }
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