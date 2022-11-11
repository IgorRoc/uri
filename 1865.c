#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, rodadas = 0, forca = 0;

    scanf("%d", &rodadas);

    for (i = 0; i < rodadas; i++) {
        char nome[10] = {'\0'};
        scanf("%s %d", nome, &forca);

        if (strcmp(nome, "Thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}