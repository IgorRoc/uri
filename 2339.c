#include <stdio.h>

int main() {
    int C = 0, P = 0, F = 0;

    scanf("%d %d %d", &C, &P, &F);

    if (C * F <= P) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}