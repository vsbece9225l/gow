#include<stdio.h>
int main()
{
 int n,i,sum=0,num=0,j;
 for(i=1;i<15;i++)
 {
   sum=sum+i;
   printf("the sum of numbers from 1 to 15 %d",sum);
   }
   for(j=15;15<=45;j++)
   {
    if(j%2!=0)
    {
      num=num+j;
      printf("the sum of odd numbers from 15 to 45%d",num);
      }
      }
      return 0;
      }
