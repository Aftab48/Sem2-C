#include <stdio.h>
#include <string.h>

void decimalToBinary(int n) {
    int binary[64]; // using array since int has a 10 digit limit
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int binaryToDecimal(int binary[], int length) {
    int decimal = 0;
    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + binary[i];
    }
    return decimal;
}

int main() {
    int choice;
    int decimal = 0;
    char input[33]; // to store binary input as string
    int binary[32];
    int length;

    printf("Number Conversion Menu:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent: ");
            decimalToBinary(decimal);
            break;
            
        case 2:
            printf("Enter the binary number: ");
            scanf("%32s", input);
            length = strlen(input);

            if (length > 32) {
                printf("Too many bits. Max is 32.\n");
                return 1;
            }

            for (int i = 0; i < length; i++) {
                 if (input[i] != '0' && input[i] != '1') {
                printf("Invalid binary digit: %c\n", input[i]);
                return 1;
                }
                binary[i] = input[i] - '0';
            }

            int decimal = binaryToDecimal(binary, length);
            printf("Decimal equivalent: %d\n", decimal);

            break;
        case 3:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
