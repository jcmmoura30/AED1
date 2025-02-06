#include <stdio.h>

int main() {
    int i, mi, f, mf;

    scanf("%d %d %d %d", &i, &mi, &f, &mf);

    int tempo_jogo_minutos = (f * 60 + mf) - (i * 60 + mi);

    if (tempo_jogo_minutos < 0) {
        tempo_jogo_minutos += 24 * 60;
    }

    if (tempo_jogo_minutos == 0) {
        tempo_jogo_minutos = 24 * 60;
    }

    int tempo_jogo_horas = tempo_jogo_minutos / 60;
    int tempo_jogo_minutos_restantes = tempo_jogo_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_jogo_horas, tempo_jogo_minutos_restantes);

    return 0;
}
