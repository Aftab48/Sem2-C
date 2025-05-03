#include <stdio.h>

int main() {
    int number, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    while (number > 0) {
        int digit = number % 10;

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        number /= 10;
    }

    if (sum == original) {
        printf("%d is a Peterson number.\n", original);
    } else {
        printf("%d is not a Peterson number.\n", original);
    }

    return 0;
}
