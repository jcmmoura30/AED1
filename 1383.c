#include <stdio.h>

int linha(int matriz[9][9]){
    for (int i=0; i<9; i++){
    int cont[10] = {0};
        for (int j=0; j<9; j++) {
        int num = matriz[i][j];
            if (num<1 || num>9 || cont[num]>0)
              return 0;
        cont[num]++;
        }
    }
return 1;
}
int coluna(int matriz[9][9]){
    for (int j=0; j<9; j++){
    int cont[10] = {0};
        for (int i=0; i<9; i++) {
        int num = matriz[i][j];
            if (num<1 || num>9 || cont[num]>0)
              return 0;
        cont[num]++;
        }
    }
    return 1;
}
int grade(int matriz[9][9]){
for (int grade_linha=0; grade_linha<9; grade_linha+=3){
        for (int grade_coluna=0; grade_coluna<9; grade_coluna+= 3){
        int cont[10] = {0};
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                int num = matriz[grade_linha + i] [grade_coluna + j];
                    if (num<1 || num>9 || cont[num]>0)
                       return 0;
                    cont[num]++;
                }
            }
        }
    }
  return 1;
}
int main(){
int n, matriz[9][9];
scanf("%d", &n);

    for (int k=1; k<=n; k++){
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
printf("Instancia %d\n", k);
    if (linha(matriz) && coluna(matriz) && grade(matriz))
        printf("SIM\n");
    else
        printf("NAO\n");

        printf("\n");
          }

    return 0;
}
