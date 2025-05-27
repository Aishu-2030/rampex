#include <stdio.h>
int main() {
   char name[20];
   printf("Enter a name:");
   fgets(name,20,stdin);
   printf("%s",name);
}