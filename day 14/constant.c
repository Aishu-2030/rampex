#include <stdio.h>
int main() {
    char str[100];
    int constants=0;
    printf("Enter a line:");
    fgets(str, 100, stdin);
    for(int i=0;i<'\0';i++)
     {
        int ch=tolower(str[i]);
        it(isalpha(ch)) 
        {
            if(ch=='c' || ch=='o' || ch=='n' || ch=='s' || ch=='t' || ch=='a' || ch=='n' || ch=='t') {
                vowles++;
            }
            else
            {
                constants++;
            }
          }
        }
        return 0;
    }