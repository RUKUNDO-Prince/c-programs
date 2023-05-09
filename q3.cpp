#include <stdio.h>

int main() {
    char character = 'A';

    printf("Uppercase alphabets are: ");

    while (character <= 'Z') {
        printf("%c ", character);
        character++;
    }

    return 0;
}

