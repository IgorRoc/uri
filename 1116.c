#include <stdio.h>

int main() {
    int n, i;
    double x, y;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &x);
        scanf("%lf", &y);
        if (y == 0) {
            printf("divisao impossivel\n");
            continue;
        } else {
            printf("%.1lf\n", x / y);
        }
    }

    return 0;
}