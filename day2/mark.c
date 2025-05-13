#include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    int sum;
    float average;

    // Ask the user to enter 5 marks
    printf("Enter mark 1: ");
    scanf("%d", &mark1);

    printf("Enter mark 2: ");
    scanf("%d", &mark2);

    printf("Enter mark 3: ");
    scanf("%d", &mark3);

    printf("Enter mark 4: ");
    scanf("%d", &mark4);

    printf("Enter mark 5: ");
    scanf("%d", &mark5);

    // Add the marks
    sum = mark1 + mark2 + mark3 + mark4 + mark5;

    // Find the average
    average = sum / 5.0;

    // Show the results
    printf("Sum of marks = %d\n", sum);
    printf("Average of marks = %.2f\n", average);

    return 0;
}

