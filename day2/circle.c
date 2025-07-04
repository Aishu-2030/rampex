#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, breadth, side;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter radius: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle = %.2f\n", area);
    } else if (choice == 2) {
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter breadth: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("Area of Rectangle = %.2f\n", area);
    } else if (choice == 3) {
        printf("Enter side: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square = %.2f\n", area);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}