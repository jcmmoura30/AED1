#include <stdio.h>

int X, Y, dist;

int main() {
  {
  scanf("%d", &X);

    Y=60*X;    //regra de três para descobrir a distância 
    dist=Y/30;

    printf("%d minutos\n", dist);
  }
  return 0;
}
