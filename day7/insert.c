#include<stdio.h>
int main()
{
    int n=5,num=35,pos=1,i;
    for(i=5;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }   
    arr[i]=num;num++;
    printf("inserted element is %d",arr[i]);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
