#include <stdio.h>
#include <stdlib.h>

int main(){
    int X, Z = -1;
    scanf("%d", &X);
    while(Z <= X){
        scanf("%d", &Z);
    }
    int i = 1, soma = X;
    while(soma < Z){
        soma += X + i;
        i++;
    }
    printf("%d\n", i);
    return 0;
}