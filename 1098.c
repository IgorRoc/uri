#include <stdio.h>

int main() {
    float i, j;
    for (i = 0; i < 2.1; i += 0.2) {
        for (j = 1 + i; j <= 3.1 + i; j += 1) {
            if (i >= 2.0 || i == 0.0 || i == 1.0) {
                printf("I=%.0f J=%.0f\n", i, j);
            } else {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
    }

    return 0;
}