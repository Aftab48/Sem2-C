#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Prime factors: ");
    
    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {
            if (isPrime(i)) { 
                printf("%d \n", i);
            }
            number /= i;
        }
    }
    
    printf("\n");
    return 0;
}
