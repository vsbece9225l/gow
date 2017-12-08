#iclude<stdio.h>
int arraysum(int array[],int array1[]);
int main()
{
 char array[50]={1,2,3,4,5};
 char array1[50]={6,7,8,9,10};
 printf("sum of array elements");
 int sum=arraysum(array,array1);
 printf("total sum of array elements:%d",sum);
 getch();
 return 0;
 }
 int arraysum(int array[],int array1[])
 {
  int i,sum1=0;
  for(i=0;i<5;i++)
  {
     sum1=sum1+array[i]+array1[i];
     }
     return sum1;
     return 0;
     }
     
