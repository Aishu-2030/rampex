#include <stdio.h>
int power(int x, int y) {
    int result = 1;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}