#include <stdio.h>

int main() {
    int i = 2;
    printf("Even numbers between 1 and 40 are:\n");
    while(i <= 40) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}