#include <stdio.h>

int main() {
    int x, n, result = 1;
    printf("Enter the value of x and n : ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    printf("\n%d\n", result);
    return 0;
}
