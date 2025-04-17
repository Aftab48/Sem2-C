#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, oddSum = 0, evenSum = 0, pos = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        if (pos % 2 == 0)
            oddSum += digit;
        else
            evenSum += digit;
        num /= 10;
        pos++;
    }
    if (abs(oddSum - evenSum) % 11 == 0)
        printf("Divisible by 11\n");
    else
        printf("Not divisible by 11\n");
    return 0;
}
