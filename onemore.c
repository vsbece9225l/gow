#include<stdio.h>
int main()
{
 int greatest;
 int i,a[10];
 printf("enter a values:");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
  }
  greatest=a[0];
  for(i=0;i<10;i++)
  { 
  if(a[i]>greatest)
  {
   greatest=a[i];
   }
   }
   printf("greatest of ten number is %d",greatest);
   return 0;
   }
   
