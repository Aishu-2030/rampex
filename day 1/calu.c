#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Simple calculator without if-else or switch-case
    result = (op == '+') * (num1 + num2)
           + (op == '-') * (num1 - num2)
           + (op == '*') * (num1 * num2)
           + (op == '/') * (num2 != 0 ? num1 / num2 : 0);

    printf("Result: %.2f\n", result);

    return 0;
}