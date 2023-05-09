#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", num, sum);

    return 0;
}

