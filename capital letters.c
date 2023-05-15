#include <stdio.h>

int main() {
    char n[30];
    printf("Enter words: ");
    scanf("%s", n);
    printf("Capital alphabets: ");

    int i = 0;
    while (n[i] != '\0') {
        if (n[i] >= 'A' && n[i] <= 'Z') {
            printf("%c ", n[i]);
        }
        i++;
    }
    return 0;
}

