#include <stdio.h>

int main() {
    int month;

    scanf("%d", &month);

    const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month >= 1 && month <= 12) {
        printf("%s\n", months[month - 1]);
    } else {
        printf("Invalid month\n");
    }

    return 0;
}
