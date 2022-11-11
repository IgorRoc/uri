#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int D, i, j, stop, quant0;
    char num[150] = {'\0'};
    scanf("%d", &D);
    setbuf(stdin, NULL);
    scanf("%s", num);
    setbuf(stdin, NULL);
    while (D != 0) {
        quant0 = 0;
        for (i = 0; num[i]; i++) {
            if (num[i] == ('0' + D)) {
                for (j = i; num[j]; j++) {
                    num[j] = num[j + 1];
                }
                i--;
            }
        }
        for (i = 0; num[i]; i++) {
            if (num[i] == '0') {
                quant0++;
            }
        }
        if (quant0 == strlen(num)) {
            printf("0\n", num);
        } else {
            if (num[0] == '0') {
                for (i = 0; num[i]; i++) {
                    if (num[i] == '0') {
                        for (j = i; num[j]; j++) {
                            num[j] = num[j + 1];
                        }
                        i--;
                    } else {
                        break;
                    }
                }
            }
            printf("%s\n", num);
        }
        for (i = 0; i < 150; i++) {
            num[i] = '\0';
        }
        scanf("%d", &D);
        setbuf(stdin, NULL);
        scanf("%s", num);
        setbuf(stdin, NULL);
    }
    return 0;
}
