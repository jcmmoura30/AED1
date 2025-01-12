#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A == 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calculando o delta
        delta = B * B - 4 * A * C;

        if (delta < 0) {
            printf("Impossivel calcular\n");
        } else {
            // Calculando as raízes
            R1 = (-B + sqrt(delta)) / (2 * A);
            R2 = (-B - sqrt(delta)) / (2 * A);

            printf("R1 = %.5f\n", R1);
            printf("R2 = %.5f\n", R2);
        }
    }

    return 0;
}
