#include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    int sum;
    float average;

    // Input marks
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

    // Calculate sum and average
    sum = mark1 + mark2 + mark3 + mark4 + mark5;
    average = sum / 5.0;

    // Check pass or fail using if-else (threshold is 35 marks)
    if (average >= 35)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    // Show sum and average
    printf("Sum of marks = %d\n", sum);
    printf("Average of marks = %.2f\n", average);

    return 0;
}