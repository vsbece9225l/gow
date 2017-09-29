#include<stdio.h>
int main()
{
 char s[]="life is so beautiful";
 int i,count=0;
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]==' ')
  {
    count++;
    }
    }
    printf(" the numberof words i agiven line %d",count+1);
    return 0;
    }
