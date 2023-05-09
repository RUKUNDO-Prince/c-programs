#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number\tSquare\tCube\tSquare Root\n");

    // Check each number from 1 to num
    for (i = 1; i <= num; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i, i * i, i * i * i, sqrt(i));
    }

    return 0;
}

