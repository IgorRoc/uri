#include <stdio.h>
#include <stdlib.h>

int main() {
    double total = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        total += 1 / (double)i;
    }
    printf("%.2f\n", total);

    return 0;
}