#include <stdio.h>

int main() {
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);


    if ((A + B > C && A + C > B && B + C > A) ||  
        (A + B > D && A + D > B && B + D > A) ||  
        (A + C > D && A + D > C && C + D > A) ||  
        (B + C > D && B + D > C && C + D > B)) {  
        printf("S\n");  
    } else {
        printf("N\n");  
    }

    return 0;
}
