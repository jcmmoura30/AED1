#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        int Ti, Di;
        double max_speed = 0.0; 

        for (int i = 1; i <= N; i++) {
            scanf("%d %d", &Ti, &Di);
            double speed = (double)Di / Ti; 
            if (speed > max_speed) {
                max_speed = speed;
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
