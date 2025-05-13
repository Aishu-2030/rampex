#include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    int sum;
    float average;
    char grade;

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

    // Determine grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output results
    printf("Sum of marks = %d\n", sum);
    printf("Average of marks = %.2f\n", average);
    printf("Grade = %c\n", grade);




}    return 0;    return 0;
}

