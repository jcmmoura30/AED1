#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

void processaLista(char *linha) {
    char *itens[1000]; 
    int totalItens = 0;

    // Divide a linha em itens separados por espaço
    char *token = strtok(linha, " ");
    while (token != NULL) {
        itens[totalItens] = malloc(strlen(token) + 1); 
        strcpy(itens[totalItens], token);
        totalItens++;
        token = strtok(NULL, " ");
    }

    // Ordena os itens
    qsort(itens, totalItens, sizeof(char *), compare);

    // Remove duplicatas e imprime a lista sem duplicatas e ordenada
    printf("%s", itens[0]);  // Imprime o primeiro item
    for (int i = 1; i < totalItens; i++) {
        if (strcmp(itens[i], itens[i - 1]) != 0) {
            printf(" %s", itens[i]);
        }
        free(itens[i - 1]);  // Libera a memória do item anterior
    }
    free(itens[totalItens - 1]);  // Libera o último item
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();  // Limpa o '\n' após a leitura de n

    char linha[20000];  

    for (int i = 0; i < n; i++) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';  // Remove o '\n' da entrada
        processaLista(linha);
    }

    return 0;
}
