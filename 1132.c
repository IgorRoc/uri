#include <stdio.h>

int main() {
    int x, y, i, s = 0;
    scanf("%d%d", &x, &y);
    if (y <= x) {
        int c = x;
        x = y;
        y = c;
    }
    for (i = x; i <= y; i++) {
        if (i % 13 != 0) {
            s += i;
        }
    }
    printf("%d\n", s);
    return 0;
}