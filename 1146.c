#include <stdio.h>

int main() {
    int input, i = 0;

    scanf("%d", &input);
    while (input != 0) {
        i = 1;
        for (; i < input; i++) {
            printf("%d ", i);
        }
        printf("%d\n", i);
        scanf("%d", &input);
    }

    return 0;
}