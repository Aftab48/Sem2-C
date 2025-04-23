#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the series S = 1 + 1/2 + 1/3 + ... + 1/%d is: %.6f\n", n, sum);

    return 0;
}
