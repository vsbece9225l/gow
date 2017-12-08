#include<stdio.h>
#define bool int
bool ispower(int n)]
{
 if(n==0)
   return 0;
   while(n!=1)
   {
    if(n%2==0)
    {
     return 0;
     n=n/2;
     }
     return 1;
     }
     int main()
     {
      ispower(31)?printf("yes\n"):printf("no\n");
      ispower(64)?printf("yes\n"):printf("no\n");
      return 0;
      }
