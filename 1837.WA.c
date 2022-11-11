#include <stdio.h>

int main() {
    int a, b;
    int q, r;
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0) {
        q = a / b;
        r = -((b * q) - a);
    } else if (a > 0 && b < 0) {
        q = a / b;
        r = -((b * q) - a);
    } else if (a < 0 && b > 0 && a == -b) {
        q = -1;
        r = 0;
    } else if (a < 0 && b > 0 && a != b) {
        q = a / b - 1;
        r = -((b * q) - a);
    } else if (a < 0 && b < 0 && a != b) {
        q = (a / b) + 1;
        r = -((b * q) - a);
    } else if (a < 0 && b < 0 && a == b) {
        q = 1;
        r = 0;
    } else if (a == 0) {
        q = 0;
        r = 0;
    }
    printf("%d %d\n", q, r);
    return 0;
}
