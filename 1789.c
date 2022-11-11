#include <stdio.h>

int main() {
    int vel, num, max, i;
    while (scanf("%d", &num) != EOF) {
        max = -1;
        for (i = 0; i < num; i++) {
            scanf("%d", &vel);
            if (vel > max)
                max = vel;
        }
        if (max < 10)
            printf("1\n");
        else if (max < 20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}
