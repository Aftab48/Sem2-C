#include <stdio.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == original;
}

int main() {
    printf("Armstrong numbers between 0 and 999 are:\n");

    for (int i = 0; i <= 999; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
