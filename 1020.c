#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int ano, mes;
    ano = x / 365;
    x = x % 365;
    mes = x / 30;
    x = x % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, x);

    return 0;
}