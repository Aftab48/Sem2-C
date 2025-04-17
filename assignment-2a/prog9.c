#include <stdio.h>

int main() {
    int num, sum = 0, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10) {
        digit = num % 10;
        sum += digit;
        product *= digit;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
