#include <stdio.h>

int main() {
    char frasei[15] = {'\0'};
    char frasef[15] = {'\0'};
    char tempoi[15] = {'\0'};
    char tempof[15] = {'\0'};

    scanf("%14[^\n]", frasei);
    setbuf(stdin, NULL);
    scanf("%14[^\n]", tempoi);
    setbuf(stdin, NULL);
    scanf("%14[^\n]", frasef);
    setbuf(stdin, NULL);
    scanf("%14[^\n]", tempof);
    setbuf(stdin, NULL);

    int i;
    int diai, diaf;
    int hori, horf, mini, minf, segi, segf;
    if (frasei[5] != '\0') {
        diai = (10 * (frasei[4] - '0')) + (frasei[5] - '0');
    } else {
        diai = (frasei[4] - '0');
    }
    if (frasef[5] != '\0') {
        diaf = (10 * (frasef[4] - '0')) + (frasef[5] - '0');
    } else {
        diaf = (frasef[4] - '0');
    }
    hori = (10 * (tempoi[0] - '\0')) + (tempoi[1] - '\0');
    horf = (10 * (tempof[0] - '\0')) + (tempof[1] - '\0');
    mini = (10 * (tempoi[5] - '\0')) + (tempoi[6] - '\0');
    minf = (10 * (tempof[5] - '\0')) + (tempof[6] - '\0');
    segi = (10 * (tempoi[10] - '\0')) + (tempoi[11] - '\0');
    segf = (10 * (tempof[10] - '\0')) + (tempof[11] - '\0');

    if (diai < diaf) {
        if (hori > horf) {
            if (mini < minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf);
                    printf("%d minuto(s)\n", minf - mini);
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf);
                    printf("%d minuto(s)\n", minf - mini);
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf);
                    printf("%d minuto(s)\n", minf - mini - 1);
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            } else if (mini == minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf);
                    printf("0 minuto(s)\n");
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf);
                    printf("0 minuto(s)\n");
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", horf - hori - 1);
                    printf("59 minuto(s)\n");
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            } else {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf);
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf);
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai - 1);
                    printf("%d hora(s)\n", 24 - hori + horf - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf - 1);
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            }
        } else if (hori < horf) {
            if (mini < minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori);
                    printf("%d minuto(s)\n", minf - mini);
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori);
                    printf("%d minuto(s)\n", minf - mini);
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori);
                    printf("%d minuto(s)\n", minf - mini - 1);
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            } else if (mini == minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori);
                    printf("0 minuto(s)\n");
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori);
                    printf("0 minuto(s)\n");
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori - 1);
                    printf("59 minuto(s)\n");
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            } else {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf);
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf);
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("%d hora(s)\n", horf - hori - 1);
                    printf("%d minuto(s)\n", 60 - segi + segf - 1);
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            }
        } else {
            if (mini < minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("0 hora(s)\n");
                    printf("%d minuto(s)\n", minf - mini);
                    printf("0 segundo(s)\n");
                } else if (segi < segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("0 hora(s)\n");
                    printf("%d minuto(s)\n", minf - mini);
                    printf("%d segundo(s)\n", segf - segi);
                } else {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("0 hora(s)\n");
                    printf("%d minuto(s)\n", minf - mini - 1);
                    printf("%d segundo(s)\n", 60 - segi + segf);
                }
            } else if (mini == minf) {
                if (segi == segf) {
                    printf("%d dia(s)\n", diaf - diai);
                    printf("0 hora(s)\n");
                    printf("0 minuto(s)\n");
                    printf("0 segundo(s)\n");
                }
            }
        }
    }
}