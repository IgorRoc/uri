#include <stdio.h>

int main() {
    int num, vetor[10], i;
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        vetor[i] = num;
        printf("N[%d] = %d\n", i, vetor[i]);
        num = num * 2;
    }

    return 0;
}
