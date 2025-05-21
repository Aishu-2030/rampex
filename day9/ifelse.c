#include <stdio.h>
int sum_of_divisors(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        } else {
           printf("%d is not a divisor of %d\n", i, n);
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sum_of_divisors(n);
    printf("Sum of divisors of %d is %d\n", n, sum);
    return 0;
}