#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    for (i = 0; i < 6; i++) {
        for (;; num++) {
            if (num % 2 == 1) {
                num++;
                break;
            }
        }
        printf("%d\n", num - 1);
    }

    return 0;
}