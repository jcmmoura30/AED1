#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 86) {
        printf("A\n");
    } else if (N >= 61) {
        printf("B\n");
    } else if (N >= 36) {
        printf("C\n");
    } else if (N >= 1) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}
