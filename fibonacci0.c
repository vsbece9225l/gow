#include<stdio.h>
int main(){
int i,n1=0,n2=1,n,next_term;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 next_term=n1+n2;
 n2=next_term;
 n1=n2;
 printf("%d,"t1);
  }
  return 0;
  }
  
