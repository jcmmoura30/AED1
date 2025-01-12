#include <stdio.h>

int main() {
    int count = 0;
    float num;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}
