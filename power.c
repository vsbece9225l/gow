#include<stdio.h>
int main()
{
 double base,exponent,result;
 printf("enter a base value");
 scanf("%f",&base);
 printf("enter a exponent value");
 scanf("%f",&exponent);
 result=pow(base,exponent);
 printf("%f",result);
 return 0;
 }
