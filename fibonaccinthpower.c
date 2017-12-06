#include<stdio.h>
#inlude<math.h>
int main()
{
 int base,exponent,t1=0,t=1,result,nextterm;
 printf("enter the base element:");
 scanf("%d",&base);
 printf("enter the exponent:");
 scanf("%d",&exponent);
 printf("%d\n",t1);
 printf("%d\n",t2);
 result=pow(base,exponent);
 nextterm=t1+t2;
 while(nextterm<=result)
 {
 printf("%d\n",nextterm);
 t1=t2;
 t2=nextterm;
 nextterm=t1+t2;
 }
 return 0;
 }
