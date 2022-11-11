#include <stdio.h>

int main() {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a == b && a == c)
            printf("*\n");
        else if (a == b)
            printf("C\n");
        else if (c == b)
            printf("A\n");
        else if (a == c)
            printf("B\n");
    }
    return 0;
}