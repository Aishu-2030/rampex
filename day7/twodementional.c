#include<stdio.h>
int main()
{
    int arr1[4][3]={{1,2,3,4},{5,6,7}};
    int i,j=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
     }
    return 0;
}