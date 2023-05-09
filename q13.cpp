#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even numbers from 1 to %d are: ", num);

    // Check each number from 1 to num
    for (i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            // If the number is even, print it
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers from 1 to %d are: ", num);

    // Check each number from 1 to num
    for (i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            // If the number is odd, print it
            printf("%d ", i);
        }
    }

    return 0;
}

