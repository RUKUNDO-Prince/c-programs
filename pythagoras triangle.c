#include <stdio.h>

long long calculateCoefficient(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    else
        return calculateCoefficient(n - 1, r - 1) + calculateCoefficient(n - 1, r);
}

int main() {
    int n, i, j;

    printf("Enter the number of rows (n) in Pascal's triangle: ");
    scanf("%d", &n);

    printf("Pascal's Triangle:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%lld ", calculateCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}

