#include<stdio.h>
int main()
{
 int array[50];
 int i,sum=0;
 printf("\nenter the number of array elements:");
 scanf("%d",&num);
 printf("\nenter elements:");
 for(i=0;i<num;i++)
 {
  scanf("%d",array[i]);
  }
  for(i=0;i<num;i++)
  {
   sum=sum+array[i];
   }
   printf("\naverage of array elements %d",sum);
   return 0;
   }
  
