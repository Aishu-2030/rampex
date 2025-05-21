#include <stdio.h>
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}
int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Celsius: %.2f\n", fahrenheitToCelsius(f));
    return 0;
}