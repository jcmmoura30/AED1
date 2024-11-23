#include <stdio.h>

int main() {
  int n, hours, minutes, remainingSeconds;

  scanf("%d", &n); // Input seconds

  hours = n / 3600; // Calculate hours
  n = n % 3600;
  minutes = n / 60;
  remainingSeconds = n % 60;

  printf("%d:%d:%d\n",  hours, minutes, remainingSeconds);

  return 0;
}
