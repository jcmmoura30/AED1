/*#include <stdio.h>
#include <string.h>

struct cel{
    int conteudo;
    struct cel*seg;
}
typedef struct conteudo celula; 
int main()
{
    celula *lst;
    lst = malloc (sizeof(celula)); 
    lst->seg = NULL;
    char nomes1[50], nomes2[50], nomes3[10];
    char *novo;
    celula c;
    celula *p;

    gets(nomes1, nomes2, nomes3);
    
    void Imprima (celula *lst) {
    celula *p;
    for (p = lst; p != NULL; p = p->seg)
    printf ("%d\n", p->conteúdo);
}
return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const int MAX_NOMES = 100;
    const int MAX_TAMANHO_NOME = 50;

    char *lista_amigos[MAX_NOMES];
    char *novos_amigos[MAX_NOMES];
    char amigo_indicacao[MAX_TAMANHO_NOME];
    int tamanho_lista = 0, tamanho_novos = 0;

    char buffer[5000];
    char resultado[5000] = "";  // String para armazenar a saída final

    // Leitura da lista atual de amigos
    fgets(buffer, sizeof(buffer), stdin);
    char *token = strtok(buffer, " \n");
    while (token != NULL) {
        lista_amigos[tamanho_lista] = malloc(strlen(token) + 1);
        strcpy(lista_amigos[tamanho_lista], token);
        tamanho_lista++;
        token = strtok(NULL, " \n");
    }

    // Leitura da nova lista de amigos
    fgets(buffer, sizeof(buffer), stdin);
    token = strtok(buffer, " \n");
    while (token != NULL) {
        novos_amigos[tamanho_novos] = malloc(strlen(token) + 1);
        strcpy(novos_amigos[tamanho_novos], token);
        tamanho_novos++;
        token = strtok(NULL, " \n");
    }

    // Leitura do amigo para indicação
    fgets(amigo_indicacao, sizeof(amigo_indicacao), stdin);
    amigo_indicacao[strcspn(amigo_indicacao, "\n")] = '\0';

    int posicao = -1;
    if (strcmp(amigo_indicacao, "nao") != 0) {
        for (int i = 0; i < tamanho_lista; i++) {
            if (strcmp(lista_amigos[i], amigo_indicacao) == 0) {
                posicao = i;
                break;
            }
        }
    }

    if (posicao == -1) {
        // Adiciona ao final da lista
        for (int i = 0; i < tamanho_novos; i++) {
            lista_amigos[tamanho_lista] = novos_amigos[i];
            tamanho_lista++;
        }
    } else {
        // Insere antes do amigo indicado
        for (int i = tamanho_lista - 1; i >= posicao; i--) {
            lista_amigos[i + tamanho_novos] = lista_amigos[i];
        }
        for (int i = 0; i < tamanho_novos; i++) {
            lista_amigos[posicao + i] = novos_amigos[i];
        }
        tamanho_lista += tamanho_novos;
    }

    // Concatena o resultado final na string "resultado"
    for (int i = 0; i < tamanho_lista; i++) {
        strcat(resultado, lista_amigos[i]);
        if (i < tamanho_lista - 1) {
            strcat(resultado, " ");
        }
    }

    // Exibe a string final com o resultado
    printf("%s\n", resultado);

    // Libera a memória alocada
    for (int i = 0; i < tamanho_lista; i++) {
        free(lista_amigos[i]);
    }

    return 0;
}

