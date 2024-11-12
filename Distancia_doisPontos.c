#include <stdio.h>
#include <math.h> //biblioteca para calcular raiz quadrada

double p1[2], p2[2], dist;

int main() {
  {
    printf("Entre com os valores para x1 e y1:\n");
    scanf("%lf %lf", &p1[0], &p1[1]);  
  
    printf("Entre com os valores para x2 e y2:\n");
    scanf("%lf %lf", &p2[0], &p2[1]); 

    dist = sqrt((p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1])); //fórmula para calcular a distância (sqrt que é responsável por calcular a raiz quadrada)
    
    printf("%.4lf\n", dist);
  }
  return 0;
}
