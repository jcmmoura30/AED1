#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, d, e, f, g, h;


  scanf("%lf", &a);


    b = floor(a / 100);
    a -= b * 100; // a = a - b * 100;
    c = floor(a / 50);
    a -= c * 50;
    d = floor(a / 20);
    a -= d * 20;
    e = floor(a / 10);
    a -= e * 10;  
    f = floor(a / 5);
    a -= f * 5;
    g = floor(a / 2);
    a -= g * 2;
    h = floor(a / 1);
    a -= h * 1;


  printf("%.0f nota(s) de R$ 100,00\n", b);
  printf("%.0f nota(s) de R$ 50,00\n", c);
  printf("%.0f nota(s) de R$ 20,00\n", d);
  printf("%.0f nota(s) de R$ 10,00\n", e);
  printf("%.0f nota(s) de R$ 5,00\n", f);
  printf("%.0f nota(s) de R$ 2,00\n", g);
  printf("%.0f nota(s) de R$ 1,00\n", h);

  return 0;
}
