#include <stdio.h>

int main() {
    int i, num, par = 0, imp = 0, pos = 0, neg = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (abs(num) % 2 == 0) {
            par++;
        } else {
            imp++;
        }
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);

    return 0;
}
