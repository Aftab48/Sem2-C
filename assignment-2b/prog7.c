#include <stdio.h>

int main() {
    int n, i, j;
    long long factorial, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = 1;

        //factorial
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        sum += factorial;
    }

    printf("Sum of the series S = 1! + 2! + ... + %d! is: %lld\n", n, sum);

    return 0;
}
