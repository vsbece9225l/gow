#include<stdio.h>
int main()
{
 int a[5]={12,45,67,78,79};
 printf("enterthe number:");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 int smallest=a[i];
 int biggest=a[i];
 if(a[i]>biggest)
 {
   biggest=a[i];
   }
   else if(a[i]<smallest)
   {
    smallest=a[i];
    }
    }
    printf("the sum of maximum and minimum number is%d:",smallest+biggest);
    }
    
 
