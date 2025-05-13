#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary, HRA, and DA
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter HRA (House Rent Allowance): ");
    scanf("%f", &hra);

    printf("Enter DA (Dearness Allowance): ");
    scanf("%f", &da);

    // Calculate gross salary
    gross = basic + hra + da;

    // Output the result
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}