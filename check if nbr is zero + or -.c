#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char c;
    
    while(1) {
        printf("Enter number: ");
        scanf("%d", &n);
        
        if (n > 0) {
            printf("The number is positive\n");
        } else if (n < 0) {
            printf("The number is negative\n");
        } else if (n == 0) {
            printf("The number is 0\n");
        } else {
            printf("Do you want to exit? enter (e) to exit: ");
            scanf(" %c", &c);
            if (c == 'e') {
                exit ;
            }
        }
    }

    return 0;
}

