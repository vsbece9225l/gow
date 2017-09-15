#include<stdio.h>
int main()
{
 int num,te,digit,sum=0;
 printf("enter the number\t");
 scanf("%d",&num);
 temp=num;
 while(temp!=0)
 {
  digit=temp%10;
  sum=sum+digit*digit*digit;
  temp=temp/10;
  }
  if(num==sum)
  {
   printf("%d the number is armstrong",num);
   }
   else
   {
    printf("%d the number is not an armstrong number",num;
    }
    return 0;
    }
