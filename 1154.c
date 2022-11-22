#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0, media = 0, cont = 0;
    scanf("%d", &idade);
    while (idade > 0) {
        cont++;
        media += idade;
        scanf("%d", &idade);
    }
    printf("%.2f\n", media / (float)cont);

    return 0;
}