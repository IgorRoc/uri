#include <stdio.h>

int main() {
    int m, n, s;
    scanf("%d%d", &m, &n);
    while (m > 0 && n > 0) {
        s = 0;
        if (m > n) {
            for (; n <= m; n++) {
                printf("%d ", n);
                s += n;
            }
            printf("Sum=%d\n", s);
        } else {
            for (; m <= n; m++) {
                printf("%d ", m);
                s += m;
            }
            printf("Sum=%d\n", s);
        }
        scanf("%d%d", &m, &n);
    }

    return 0;
}
