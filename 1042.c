#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int vet[3] = {x, y, z};
    int i, aux;
    for (i = 0; i < 2; i++) {
        if (vet[i] > vet[i + 1]) {
            aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;
            i = -1;
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", vet[i]);
    }
    printf("\n%d\n%d\n%d\n", x, y, z);

    return 0;
}