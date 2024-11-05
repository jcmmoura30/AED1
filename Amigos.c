#include <stdio.h>
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
}
