#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int hor, min;
    hor = n / 3600;
    n = n % 3600;
    min = n / 60;
    n = n % 60;
    printf("%d:%d:%d\n", hor, min, n);

    return 0;
}