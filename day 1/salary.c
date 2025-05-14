#include <stdio.h>

int main() {
    char name[50];
    int age;
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return 0;
}