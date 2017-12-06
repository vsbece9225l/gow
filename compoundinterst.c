#include<stdio.h>
int main()
{
 float p,r,n,t1,t2,j;
 printf("\nenter the principle amount:");
 scanf("%f",&p);
 printf("\nenter rate of interest:");
scanf("%f",&r);
printf("enter the number of years:");
scanf("%d",&n);
t1=p*pow(1+(r/100)/j,n*j);
j=1;
t2=p*pow(1+(r/100)/j,n*j);
printf("\n total value compounding daily=%.2f",t1);
printf("\n total value compoundinng yearly=%.2f",t2);
getch();
return 0;
}

 
