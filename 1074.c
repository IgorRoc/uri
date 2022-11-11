#include <stdio.h>

int main() {
    int tam, num, i;
    scanf("%d", &tam);
    for (i = 0; i < tam; i++) {
        scanf("%d", &num);
        if (num == 0) {
            printf("NULL\n");
            continue;
        }
        if (num > 0 && num % 2 == 0) {
            printf("EVEN POSITIVE\n");
            continue;
        }
        if (num > 0 && num % 2 != 0) {
            printf("ODD POSITIVE\n");
            continue;
        }
        if (num < 0 && num % 2 == 0) {
            printf("EVEN NEGATIVE\n");
            continue;
        }
        if (num < 0 && num % 2 != 0) {
            printf("ODD NEGATIVE\n");
            continue;
        }
        if (num > 0) {
            printf("POSITIVE\n");
            continue;
        }
        if (num < 0) {
            printf("NEGATIVE\n");
            continue;
        }
        if (num % 2 == 0) {
            printf("EVEN\n");
            continue;
        } else {
            printf("ODD\n");
            continue;
        }
    }

    return 0;
}
