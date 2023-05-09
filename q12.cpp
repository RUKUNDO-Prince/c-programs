#include <stdio.h>

int main() {
    int num, i, j, is_prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers from 1 to %d are: ", num);

    // Check each number from 2 to num
    for (i = 2; i <= num; i++) {
        // Assume the number is prime
        is_prime = 1;

        // Check if the number is divisible by any number from 2 to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                // If the number is divisible, it is not prime
                is_prime = 0;
                break;
            }
        }

        // If the number is prime, print it
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

