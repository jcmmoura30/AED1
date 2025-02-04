#include <stdio.h>

int main() {
    double H, P, result;

    scanf("%lf %lf", &H, &P);

    result = H / P;

    printf("%.2lf\n", result); 

    return 0;
}
