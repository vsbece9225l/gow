#include<stdio.h>
int main()
{
 int n,num=0,temp;
 printf("enter the integer\n");
 scanf("%d",&n);
 while(n!=0)
 {
  n=n/10;
  num=num*10+temp;
  temp=n%10;
  }
  printf("the reversed integer is %d",num);
  return 0;
  }
