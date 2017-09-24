#include<stdio.h>
int main(){
int n;
int sum=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 sum=sum+i;
 }
 int n1=sum+n;
 printf("the sum of all numbers it has to be in lesser than the given number%d",n1);
 return 0;
 }
