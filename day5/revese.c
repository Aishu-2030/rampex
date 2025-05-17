#include<stdio.h>
int main()
{
    int num=123,rev;
    while(num!=0)
    {
        rev=rev*10+rev%10;
        num/=10;
    }
    return 0;
}