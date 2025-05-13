#include <stdio.h>

int main() {
    int a, b, c, result;

    // Input values
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    // Evaluate a compound expression
    // Example: result = a + b * c
    result = a + b * c;

    // Show how precedence works
    printf("Result of a + b * c = %d\n", result);
    printf("Because multiplication (*) has higher precedence than addition (+),\n");
    printf("the expression is evaluated as a + (b * c).\n");

    return 0;
}