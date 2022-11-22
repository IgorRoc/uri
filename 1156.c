#include <stdio.h>
#include <stdlib.h>

int main() {
    double S = 0;
    int dividendo = 1, divisor = 1;
    while (dividendo <= 39) {
        S += (double)dividendo / divisor;
        dividendo += 2;
        divisor *= 2;
    }
    printf("%.2f\n", S);

    return 0;
}