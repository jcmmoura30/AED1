#include <stdio.h>

int main() {
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &valor);

    // Transformando o valor para inteiro em centavos
    int valor_int = (int)(valor * 100 + 0.5);  // Arredonda para o inteiro mais próximo

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qnt = valor_int / (notas[i] * 100);  // Calcular quantidade de notas
        valor_int %= (int)(notas[i] * 100);      
        printf("%d nota(s) de R$ %.2f\n", qnt, notas[i] * 1.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qnt = valor_int / (int)(moedas[i] * 100);  // Calcular quantidade de moedas
        valor_int %= (int)(moedas[i] * 100);     
        printf("%d moeda(s) de R$ %.2f\n", qnt, moedas[i]);
    }

    return 0;
}
