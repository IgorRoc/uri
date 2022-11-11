#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int i, calc = 1;
    for (i = 1; i <= num; i++) {
        printf("%d %d %d PUM\n", calc, calc + 1, calc + 2);
        calc += 4;
    }

    return 0;
}
