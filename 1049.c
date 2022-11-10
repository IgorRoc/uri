#include <stdio.h>
#include <string.h>

int main() {
    char p1[20], p2[20], p3[20];
    gets(p1);
    setbuf(stdin, NULL);
    gets(p2);
    setbuf(stdin, NULL);
    gets(p3);
    setbuf(stdin, NULL);
    if (!(strcmp(p1, "vertebrado"))) {
        if (!(strcmp(p2, "ave"))) {
            if (!(strcmp(p3, "carnivoro"))) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (!(strcmp(p3, "onivoro"))) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (!(strcmp(p2, "inseto"))) {
            if (!(strcmp(p3, "hematofago"))) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (!(strcmp(p3, "hematofago"))) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
