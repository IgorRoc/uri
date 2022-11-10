#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    double total = 0;

    switch (x) {
        case 1:
            total = total + 4;
            break;
        case 2:
            total = total + 4.5;
            break;
        case 3:
            total = total + 5;
            break;
        case 4:
            total = total + 2;
            break;
        case 5:
            total = total + 1.5;
            break;
    }

    printf("Total: R$ %.2lf\n", total * y);

    return 0;
}
