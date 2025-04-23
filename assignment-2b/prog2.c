#include <stdio.h>

int main() {
    int number, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >= 10) {
        sum = 0;

        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }

        number = sum;
    }

    printf("Digital root is: %d\n", number);

    return 0;
}
