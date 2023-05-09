#include <stdio.h>

int main() {
    int age, i, baby = 0, school = 0, adult = 0;

    for (i = 1; i <= 15; i++) {
        printf("Enter the age of person %d: ", i);
        scanf("%d", &age);

        if (age <= 5) {
            baby++;
        } else if (age >= 6 && age <= 18) {
            school++;
        } else {
            adult++;
        }
    }

    printf("Total number of babies: %d\n", baby);
    printf("Total number of school-aged children: %d\n", school);
    printf("Total number of adults: %d\n", adult);

    return 0;
}

