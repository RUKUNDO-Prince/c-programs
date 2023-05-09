#include <stdio.h>

int main() {
    char ch;

    printf("Uppercase Alphabets: ");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    printf("\nLowercase Alphabets: ");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}

