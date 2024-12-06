#include <stdio.h>

int main() {
    int n = 5;
    int sets = 3;

    for (int s = 1; s <= sets; s++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("X");
            }
            printf("\n");
        }
    }

    return 0;
}
