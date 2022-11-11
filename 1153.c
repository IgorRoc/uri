#include <stdio.h>

int main() {
    int result = 0;
    int input;

    scanf("%d", &input);

    if (input > 0) {
        result = 1;
    }
    for (; input > 0; input--) {
        result *= input;
    }

    printf("%d\n", result);
    return 0;
}