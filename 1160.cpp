#include <iostream>

using namespace std;

int calculoTempo(int, int, float, float);

int main() {
    int qtd = 0;
    scanf("%d", &qtd);

    int i = 0;
    for (i = 0; i < qtd; i++) {
        int PA, PB;
        float G1, G2;

        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);

        int tempo = calculoTempo(PA, PB, G1, G2);

        if (tempo > 100) {
            printf("Mais de 1 seculo.\n");
            continue;
        }
        printf("%d anos.\n", tempo);
    }

    return 0;
}

int calculoTempo(int PA, int PB, float G1, float G2) {
    int tempo = 0;
    while (PA <= PB) {
        PA += PA * (G1 / 100);
        PB += PB * (G2 / 100);
        tempo++;
        if (tempo > 100) {
            break;
        }
    }

    return tempo;
}