#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find and print the maximum
    if (num1 > num2)
        printf("Maximum is %d\n", num1);
    else
        printf("Maximum is %d\n", num2);

    return 0;
}