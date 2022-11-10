#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    unsigned int tam;
    scanf("%d", &tam);
    unsigned int i, j;
    setbuf(stdin, NULL);
    for (i = 0; i < tam; i++) {
        char frase[1050] = {'\0'};
        int aux;
        scanf("%1048[^\n]", frase);
        setbuf(stdin, NULL);
        unsigned int len = strlen(frase), halflen = strlen(frase) / 2;
        for (j = 0; j < len; j++) {
            if ((frase[j] >= 'a' && frase[j] <= 'z') || (frase[j] >= 'A' && frase[j] <= 'Z')) {
                frase[j] = frase[j] + 3;
            }
        }
        for (j = 0, aux = len - 1; j < halflen; j++, aux--) {
            char c = frase[j];
            frase[j] = frase[aux];
            frase[aux] = c;
        }
        for (j = halflen; j < len; j++) {
            frase[j] = frase[j] - 1;
        }
        printf("%s\n", frase);
    }

    return 0;
}
