#include <stdio.h>

int main() {
    int op = 1, totala = 0, totalg = 0, totald = 0;
    while (op != 4) {
        scanf("%d", &op);
        while (op < 1 || op > 4) {
            scanf("%d", &op);
        }
        switch (op) {
            case 1:
                totala++;
                break;
            case 2:
                totalg++;
                break;
            case 3:
                totald++;
                break;
            case 4:
                break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", totala, totalg, totald);

    return 0;
}