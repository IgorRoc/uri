#include <stdio.h>

int main() {
    int tam, i;
    int quant, qc = 0, qr = 0, qs = 0;
    char tipo;
    scanf("%d", &tam);
    for (i = 0; i < tam; i++) {
        scanf("%d %c", &quant, &tipo);
        setbuf(stdin, NULL);
        switch (tipo) {
            case 'C':
                qc += quant;
                break;
            case 'R':
                qr += quant;
                break;
            case 'S':
                qs += quant;
                break;
        }
    }
    double pc, pr, ps;
    pc = 100.0 * (qc / (double)(qs + qc + qr));
    pr = 100.0 * (qr / (double)(qs + qc + qr));
    ps = 100.0 * (qs / (double)(qs + qc + qr));
    printf("Total: %d cobaias\n", qs + qc + qr);
    printf("Total de coelhos: %d\n", qc);
    printf("Total de ratos: %d\n", qr);
    printf("Total de sapos: %d\n", qs);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);

    return 0;
}