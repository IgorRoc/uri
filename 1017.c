#include <stdio.h>

int main() {
    int temp, vm;
    double tot;
    scanf("%d%d", &temp, &vm);

    tot = temp * vm;
    tot = tot / 12;
    printf("%.3lf\n", tot);

    return 0;
}