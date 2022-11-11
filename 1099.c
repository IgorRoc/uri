#include <stdio.h>

int main() {
    int i, n;
    int x, y;
    int s;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        s = 0;
        if (x > y) {
            for (y += 1; y < x; y++) {
                if (y % 2 != 0) {
                    s += y;
                }
            }
        } else if (y > x) {
            for (x += 1; x < y; x++) {
                if (x % 2 != 0) {
                    s += x;
                }
            }
        } else {
            s = 0;
        }
        printf("%d\n", s);
    }

    return 0;
}