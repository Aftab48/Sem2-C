#include <stdio.h>

int main() {
    int n;
    int totalSum = 0;
    int tempSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  

        for (int j = 1; j <= i; j++) {
            tempSum += j; 
        }

        totalSum += tempSum;
        tempSum = 0;
    }

    printf("Sum of the series is: %d\n", totalSum);

    return 0;
}
