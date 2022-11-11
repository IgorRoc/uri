#include <stdio.h>

int main() {
    int i, num;
    int imaior, maior;
    for (i = 0; i < 100; i++) {
        scanf("%d", &num);
        if (i == 0) {
            imaior = 0;
            maior = num;
        } else if (num > maior) {
            maior = num;
            imaior = i;
        }
    }
    printf("%d\n%d\n", maior, imaior + 1);
    return 0;
}