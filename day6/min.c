#include <stdio.h>

int main() {
    int a[] = {5, 2, 9, 1, 7}, i, min = a[0];
    for(i = 1; i < 5; i++)
        if(a[i] < min) min = a[i];
    printf("Lowest: %d\n", min);
    return 0;
}