#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0; // as 0 and 1 are not prime numbers

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    printf("Prime numbers less than 100 are:\n");

    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
