#include <stdio.h>

float calculateArea(float length, float width) {
    return length * width;
}

float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    int choice;
    float length, width, area, perimeter;

    do {
        printf("\nRectangle Calculations Menu:\n");
        printf("1. Calculate Area\n");
        printf("2. Calculate Perimeter\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                area = calculateArea(length, width);
                printf("Area of the rectangle = %.2f\n", area);
                break;
            case 2:
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                perimeter = calculatePerimeter(length, width);
                printf("Perimeter of the rectangle = %.2f\n", perimeter);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
