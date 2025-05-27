#include <stdio.h>
int main() {
    int arr[] = {50, 60, 70, 6, 8};
    int *start = arr;          
    int *end = arr+4;
    int temp;
    while(start<end)
    {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
    }
    printf("swapping first and last elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
