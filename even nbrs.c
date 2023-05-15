#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("even numbers between %d and 1 are: \n", n);
    int i = n;
    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    }
    return 0;
}

