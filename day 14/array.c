
#include <stdio.h>
int main() {
    int arr[]={50,60,70,80,6}; 
    int*ptr=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
return 0;
}