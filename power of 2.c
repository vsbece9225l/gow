#include<stdio.h>
int poweroftwo(int n)
{
 if(n==0)
 return 0;
 while(n!=1)
 {
  if(n%2!=0)
  {
    return 0;
    n=n/2;
    }
    return 1;
    }
    int main()
    {
     ispoweroftwo(31)?printf("yes\n"):printf("no\n");
     ispoweroftwo(64)?printf("yes\n"):printf("no\n");
     return 0;
     }
    
