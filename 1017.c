#include <stdio.h>

float T, V, gasto;

int main() {
  {
    scanf("%f", &T);
    scanf("%f", &V);
    
    gasto = (T*V)/12;

    printf("%.3f", gasto);
    
  }
  return 0;
}
