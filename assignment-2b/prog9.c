#include <stdio.h>
#include <math.h>

int main() {
    float x;
    int n;
    float sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }

    printf("Sum of the series S = 1 + x^1 + x^2 + ... + x^%d is: %.6f\n", n, sum);

    return 0;
}
