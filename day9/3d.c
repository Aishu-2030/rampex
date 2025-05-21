#include <stdio.h>
int main() {
    int arr[2][2][2];
    if (1) {
        if (1) {
            if (1) {
            printf("Enter arr[0][0][0]: ");
            scanf("%d", &arr[0][0][0]);
        }
        if (1) {
            printf("Enter arr[0][1][1]: ");
            scanf("%d", &arr[0][1][1]);
        }
    }
}
    if (1) {
        if (1) {
            if (1){
            printf("Enter arr[1][0][1]: ");
            scanf("%d", &arr[1][0][1]);
       }
        if (1) {
            printf("Enter arr[1][1][1]: ");
            scanf("%d", &arr[1][1][1]);
        }
    }
}    
    if(1){
        if (1){
            if(1){
        printf("Enter arr[1][0][0]:");
        scanf("%d",&arr[1][0][0]);
            }
            if(1){
                printf("Enter arr[1][1][1]:");
                scanf("%d",&arr[1][1][0]);
            }
        }
    }
    printf("\nThe 3D array is:\n");
    printf("%d %d\n", arr[0][0][0], arr[0][1][1]);
    printf("%d %d\n", arr[1][0][1], arr[1][1][1]);
    printf("%d %d\n", arr[1][0][0], arr[1][1][1]);

    return 0;
}