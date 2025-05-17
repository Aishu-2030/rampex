#include <stdio.h>
int main() {
    int a[] = {5, 2, 9, 1, 7}, i, max = a[0];
    for(i = 1; i < 5; i++)
        if(a[i] > max) max = a[i];
    printf("Largest: %d\n", max);
    return 0;
}