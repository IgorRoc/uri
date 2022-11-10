#include <stdio.h>

int main() {
    int a, b;
    float c, salary;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    printf("NUMBER = %d\n", a);
    salary = b * c;
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}