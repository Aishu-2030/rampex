#include <stdio.h>

int main() {
    int temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);
    if (temp < 10) {
        printf("Wear a jacket.\n");
    } else if (temp >= 10 && temp < 20) {
        printf("Wear a sweater.\n");
    } else {
        printf("Wear a t-shirt.\n");
    }

    return 0;
}