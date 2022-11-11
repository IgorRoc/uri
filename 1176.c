#include <stdio.h>

int main() {
    unsigned int tam, num, i;
    unsigned long long int fib[60] = {0, 1};
    scanf("%d", &tam);
    for (; tam > 0; tam--) {
        scanf("%d", &num);
        for (i = 2; i < num + 1; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }

    return 0;
}