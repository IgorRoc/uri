#include <stdio.h>

int main() {
    int tam, i;
    scanf("%d", &tam);
    for (i = 2; i <= tam; i += 2) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}