#include <stdio.h>

int main() {
    int tam;
    scanf("%d", &tam);
    int i;
    for (i = 0; i < tam; i++) {
        int num;
        scanf("%d", &num);
        (num > 8000) ? printf("Mais de 8000!\n") : printf("Inseto!\n");
    }
    return 0;
}