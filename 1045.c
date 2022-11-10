#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, aux;
    int i;
    scanf("%lf%lf%lf", &a, &b, &c);
    for (i = 0; i < 3; i++) {
        if (b > a) {
            aux = b;
            b = a;
            a = aux;
            i = -1;
        }
        if (c > b) {
            aux = c;
            c = b;
            b = aux;
            i = -1;
        }
    }
    if (a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a, 2) < (pow(b, 2) + pow(c, 2))) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || c == a || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
