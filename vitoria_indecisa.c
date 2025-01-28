#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    char curso[101];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", curso);  
    }

    printf("Ciencia da Computacao\n");

    return 0;
}
