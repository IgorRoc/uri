#include <stdio.h>

int main() {
    int a, b, c, d;
    int min, hor;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (b == d && a == c) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        hor = c - a;
        min = d - b;
        if (min < 0) {
            min += 60;
            hor--;
        }
        if (hor < 0) {
            hor += 24;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hor, min);
    }

    return 0;
}
