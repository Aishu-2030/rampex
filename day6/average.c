#include <stdio.h>
int main() 
{
    int size, i, sum = 0;
    float average;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / size;
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    return 0;
}