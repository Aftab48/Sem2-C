#include <stdio.h>

int main() {

    int n, i, sum = 0, odd = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    
    return 0;
}
