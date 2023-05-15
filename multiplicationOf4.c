#include <stdio.h>

int main() {
    int i, n, prod;
    for (i = 1; i <= 4; i++) {
        printf("The multiplication table of %d is the following\n", i);
        for (n = 1; n <= 10; n++) {
            prod = i * n;
            printf("%d * %d = %d\n", i, n, prod);
        }
    }
    return 0;
}

