#include<stdio.h>
int main()
{
 int num1,num2,gcd,remainder;
 int numerator,denominator;
 scanf("%d%d",&num1,&num2);
 if(num1>num2)
 {
  numerator=num1;
  denominator=num2;
  }
  else
  {
   numerator=num2;
   denominator=num1;
   }
   remainder=numerator%denominator;
   while(remainder!=0)
   {
    numerator=denominator;
    denominator=remainder;
    remainder=numerator%denominator;
    }
     gcd=denominator;
    lcm=num1*num2/gcd;
    printf("the lcm is%d",lcm);
    }
