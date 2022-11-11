#include <stdio.h>
#include <string.h>

int main() {
    char frase[15] = {'\0'};
    while (scanf("%14[^\n]", &frase) == 1) {
        setbuf(stdin, NULL);
        if (strcmp(frase, "nenhuma") == 0) {
            printf("portugues\n");
        } else if (strcmp(frase, "esquerda") == 0) {
            printf("ingles\n");
        } else if (strcmp(frase, "direita") == 0) {
            printf("frances\n");
        } else if (strcmp(frase, "as duas") == 0) {
            printf("caiu\n");
        }
    }

    return 0;
}