#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are: ", n);

    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

