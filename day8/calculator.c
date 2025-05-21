#include <stdio.h>
double add(double a, double b)    { return a + b; }
double sub(double a, double b)    { return a - b; }
double mul(double a, double b)    { return a * b; }
double divide(double a, double b) { return a / b; }
int main() {
    double x, y;
    char op;
    printf("Enter: ");
    scanf("%lf %c %lf", &x, &op, &y);

    if (op == '/' && y == 0) {
        printf("Error: Division by zero\n");
        return 1;
    }
    switch(op) {
        case '+': printf("%.2lf\n", add(x, y)); break;
        case '-': printf("%.2lf\n", sub(x, y)); break;
        case '*': printf("%.2lf\n", mul(x, y)); break;
        case '/': printf("%.2lf\n", divide(x, y)); break;
        default:  printf("Invalid operator\n");
    }
    return 0;
}