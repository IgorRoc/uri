#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X % 4 == 0 && (X % 100 != 0 || X % 400 == 0)) {
        printf("This is leap year.\n");
        if (X % 15 == 0 && X % 55 == 0) {
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n");
        } else if (X % 15 == 0)
            printf("This is huluculu festival year.\n");
        else if (X % 55 == 0)
            printf("This is bulukulu festival year.\n");
        return 0;
    } else {
        if (X % 15 == 0) {
            printf("This is huluculo festival year.\n");
            return 0;
        }
        if (X % 55 == 0) {
            printf("This is bulukulu festival year.\n");
            return 0;
        }
    }
    printf("This is an ordinary year.\n");

    return 0;
}