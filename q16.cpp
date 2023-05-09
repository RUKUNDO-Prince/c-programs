#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Leap years from 1 to %d are: ", num);

    // Check each year from 1 to num
    for (i = 1; i <= num; i++) {
        // Check if the year is a leap year
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            printf("%d ", i);
        }
    }

    return 0;
}

