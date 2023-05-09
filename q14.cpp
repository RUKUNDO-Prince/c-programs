#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, result, n = 0, power;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Armstrong numbers from 1 to %d are: ", num);
    
    for (int i = 1; i <= num; i++) {
        original_num = i;
        while (original_num != 0) {
            original_num /= 10;
            ++n;
        }
        original_num = i;
        result = 0;
        while (original_num != 0) {
            remainder = original_num % 10;
            power = round(pow(remainder, n));
            result += power;
            original_num /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
    }
    return 0;
}

