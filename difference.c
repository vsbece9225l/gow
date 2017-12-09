#include<stdio.h>
int main()
{
 int i=0,j=1,n;
 int  difference;
 char array[50]={2,4,1,6,4,2,2,9,7};
 clrscr();
 printf("\nenter the number of array element:");
 scanf("%d",&n)
 while(i<n)
 {
  if(i!=j)
  {
    difference=array[i]-array[j];
    printf("difference of array elements%d-%d=%d\n",array[i],array[i],difference);
    }
    i++;
    j++;
    }
    return 0;
    }
