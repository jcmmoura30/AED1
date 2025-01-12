#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, f;


    scanf("%d %d", &i, &f);

    int tempo_jogo = f - i;
    if (tempo_jogo < 0) {
        tempo_jogo += 24;
    }
    if (tempo_jogo == 0) {
        tempo_jogo = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo_jogo);
    
    return 0;
}
