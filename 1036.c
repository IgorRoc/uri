#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, delt;
    scanf("%lf%lf%lf", &a, &b, &c);

    delt = pow(b, 2) - 4 * a * c;

    if (delt < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", (-b + sqrt(delt)) / (2 * a));
        printf("R2 = %.5lf\n", (-b - sqrt(delt)) / (2 * a));
    }

    return 0;
}
