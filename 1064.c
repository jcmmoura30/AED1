#include <stdio.h>

int main() {
    int count = 0;
    float sum = 0, num;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            count++;
            sum += num;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;
}
