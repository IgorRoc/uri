#include <cstdlib>
#include <iostream>

using namespace std;

int getPlayersAge(int);

int main() {
    int qtd = 0;
    scanf("%d", &qtd);

    int i = 0, j = 0;
    for (i = 0; i < qtd; i++) {
        int N = 0;
        scanf("%d", &N);
        int idadeCapitao = getPlayersAge(N);
        printf("Case %d: %d\n", i + 1, idadeCapitao);
    }

    return 0;
}

int getPlayersAge(int N) {
    int i = 0;
    int* idades = (int*)malloc(N * sizeof(int));
    for (i = 0; i < N; i++) {
        scanf("%d", &idades[i]);
    }

    return idades[N / 2];
}