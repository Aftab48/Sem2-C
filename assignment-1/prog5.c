#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("%d is an even positive number.\n", num);
        } 
    } else if (num < 0) {
        if (num % 2 != 0) {
            printf("%d is an odd negative number.\n", num);
        }
    } else {
        printf("%d is neither positive nor negative (it's zero).\n", num);
    }

    return 1;
}
