#include<stdio.h>
int main()
{
    int arr[5]={4,7,1,9,3};
    int key=9;
    int found=0;
    for (int i=0;i<5;i++)
    {
        if (arr[i]==key)
        {
            printf("elements %d found at index %d\n",key,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("elements %d not found\n",key);
        
    }
    return 0;
}