#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("Ho");

        if (i < x - 1) {
            printf(" ");
        }
    }

    printf("!\n");

    return 0;
}
