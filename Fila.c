#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    int conteudo;
    struct cel *seg;
} celula;

// Função para imprimir a lista
void printList(celula *p) {
    celula *seg = p->seg;  
    while (seg != NULL) {
        printf("%d ", seg->conteudo);  
        seg = seg->seg;
    }
}

// Função para inserir uma nova celula 
void inserirCelula(int conteudo, celula *p) {
    celula *s = malloc(sizeof(celula));
    s->conteudo = conteudo;
    s->seg = NULL;

    // Procura o último nó para inserir o novo nó
    celula *temp = p;
    while (temp->seg != NULL) {
        temp = temp->seg;
    }
    temp->seg = s; 
}

// Função para buscar e remover uma celula 
void Busca_Remove(int conteudo, celula *p) {
    celula *a = p;         
    celula *q = p->seg;   
    while (q != NULL && q->conteudo != conteudo) {
        a = q;
        q = q->seg;
    }
    // Se encontrou o nó, remove-o da lista
    if (q != NULL) {
        a->seg = q->seg;  
        free(q);         
    }
}

int main() {
    int sizeFila = 0, conteudo = 0, sizeExcluidos = 0, excluidos = 0;

    celula *p = malloc(sizeof(celula));
    p->seg = NULL; 

    // Le o tamanho da fila 
    scanf("%d", &sizeFila);
    for (int i = 0; i < sizeFila; i++) {
        scanf("%d", &conteudo);
        inserirCelula(conteudo, p); //insere os elementos na lista
    }

    // Le o número de exclusões 
    scanf("%d", &sizeExcluidos);
    for (int y = 0; y < sizeExcluidos; y++) {
        scanf("%d", &excluidos);
        Busca_Remove(excluidos, p); //remove os elementos da lista
    }

    // Imprime a lista final
    printList(p);

    celula *temp;
    while (p != NULL) {
        temp = p;
        p = p->seg;
        free(temp);
    }

    return 0;
}
