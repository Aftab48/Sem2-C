#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (int i = 0; i <= 8; i++) {
        sum += pow(x, i);
    }

    printf("Sum of the series S = 1 + x^1 + x^2 + ... + x^8 is: %.6f\n", sum);

    return 0;
}
