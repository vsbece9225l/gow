#include<stdio.h>
 void printnum(int n)
 {
  if(n>0)
  printnum(n-1);
  printf("%d",n);
  }
  return;
  }
  int main()
  { 
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   printnum(n);
   getchar();
   return 0;
   }
  
