#include <stdio.h>

int isFib(int n) {
    int a = 0, b = 1, sum;

    if (n == 0) return 1;
    if (n == 1) return 1;
    
    while (b < n) {
        sum = a + b;
        a = b;
        b = sum;
    }
    return b == n;
}

int main() {
    int n;
    printf("Enter the range :\n");
    scanf("%d", &n);

    int first = 1;
    for (int i = 1; i <= n; i++) {
        if (!isFib(i)) {
            if (!first)
                printf(", ");
            printf("%d", i);
            first = 0;
        }        
    }
    printf("\n");
    return 0;
}