#include <stdio.h>

int main() {
    int start, end, i;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    for(i = start; i <= end; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
