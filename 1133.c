#include <stdio.h>

int main() {
    int num1, num2, i;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }
    for (i = num1 + 1; i < num2; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}