#include <stdio.h>

int main() {
    char n[30];
    printf("Enter words: ");
    scanf("%s", n);
    printf("Lowercase alphabets: ");

    int i = 0;
    while (n[i] != '\0') {
        if (n[i] >= 'a' && n[i] <= 'z') {
            printf("%c ", n[i]);
        }
        i++;
    }
    return 0;
}

