#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para verificar se a expressão é bem formada
int correta(char s[]) {
  int n = strlen(s); // Comprimento da string
  char *p = malloc(n * sizeof(char)); 
  int t = 0; // Topo da pilha

  if (p == NULL) { 
    return 0;
  }

  // verificar cada caractere da expressão
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == '(' || s[i] == '{') { 
      p[t++] = s[i];
    } 
    else if (s[i] == ')') { // verifica se existe um par para ')'
      if (t != 0 && p[t - 1] == '(') { 
        --t; // Remove o topo da pilha se tiver par 
      } else { 
        free(p); 
        return 0;
      }
    } 
    else if (s[i] == '}') { // verifica se existe um par para '}'
      if (t != 0 && p[t - 1] == '{') { 
        --t; // Remove o topo da pilha se tiver par 
      } else { 
        free(p); 
        return 0;
      }
    }
  }

  int resultado = (t == 0); // Se t = 0 está bem formada
  free(p);                  
  return resultado;
}

int main() {
  char expressao[10000];
    
    while (scanf("%s", expressao) != EOF) { //loop para ler múltiplas expressões até o final da entrada
        if (correta(expressao)) {
          printf("\ncorrect");
        } else {
          printf("\nincorrect");
        }
      }

      return 0;
    }
