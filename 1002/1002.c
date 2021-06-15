#include <stdio.h>

int main(){
    float raio, n = 3.14159;
    float area;
    printf("1- ");
    scanf("%f", &raio);
    area = n * (raio * raio);
    printf("A=%.4f\n", area);
    return 0;
}