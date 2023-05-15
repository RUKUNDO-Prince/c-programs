#include <stdio.h>
int main() {
    int i, j, n, prime;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            printf("%d, ", i);
        }
    }
    return 0;
}

