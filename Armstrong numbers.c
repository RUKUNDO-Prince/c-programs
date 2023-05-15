#include <stdio.h>
#include <math.h>

int main() {
    int n, i, num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are: ", n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        if(i == sum) {
            printf("%d, ", i);
        }
    }

    return 0;
}

