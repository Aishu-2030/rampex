#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit)
 {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
int main()
 {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
    return 0;
}