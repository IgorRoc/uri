#include <stdio.h>

int main() {
    int N, F1, F2, MMC = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d%d", &F1, &F2);
        if (F1 < F2) {
            for (int j = 1; j <= F1; j++) {
                if (F1 % j == 0 && F2 % j == 0) {
                    MMC = j;
                }
            }
        } else {
            for (int j = 1; j <= F2; j++) {
                if (F1 % j == 0 && F2 % j == 0) {
                    MMC = j;
                }
            }
        }

        printf("%d\n", MMC);
    }

    return 0;
}