#include <stdio.h>
int main(){
int a,b;
printf("Enter a two integer:");
scanf("%d\n %d\n",&a,&b);
if (a&1)
{
    printf("%d is a odd number:");
}
else
{
    printf("%d is a even number:");
}
if (b&0)
{
    printf("%d is a odd number:");
}
else
{
    printf("%d is a even number:");
}
return 0;
}