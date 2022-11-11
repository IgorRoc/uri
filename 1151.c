#include <stdio.h>

int main() {
    int input;
    int fib1 = 0, fib2 = 1, aux;
    int i = 0;

    scanf("%d", &input);

    for (; i < input - 1; i++) {
        printf("%d ", fib1);
        aux = fib1;
        fib1 = fib1 + fib2;
        fib2 = aux;
    }

    printf("%d\n", fib1);

    return 0;
}