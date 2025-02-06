#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 1000

// Função para contar diamantes usando uma pilha
int contarDiamantes(char *mina) {
    char pilha[TAMANHO_MAX]; // Pilha para armazenar os '<'
    int topo = -1;           // Inicializa o topo da pilha
    int contador = 0;        // Contador de diamantes

    for (int i = 0; mina[i] != '\0'; i++) {
        if (mina[i] == '<') {
            pilha[++topo] = '<'; // Empilha '<'
        } else if (mina[i] == '>') {
            if (topo >= 0) { // Verifica se há '<' na pilha para formar um diamante
                topo--;      // Remove o '<' correspondente
                contador++;  // Incrementa o contador de diamantes
            }
        }
    }

    return contador;
}

int main() {
    int casosDeTeste;
    char mina[TAMANHO_MAX + 1];

    scanf("%d", &casosDeTeste); // Lê o número de casos de teste
    getchar();                  // Remove o caractere '\n' do buffer

    for (int i = 0; i < casosDeTeste; i++) {
        fgets(mina, sizeof(mina), stdin);   // Lê a entrada da mina
        mina[strcspn(mina, "\n")] = '\0';  // Remove o '\n' do final da string, se existir
        printf("%d\n", contarDiamantes(mina)); // Calcula e imprime a quantidade de diamantes
    }

    return 0;
}

