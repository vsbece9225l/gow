#include<stdio.h>
int main()
{
 char str[80];
 int i,alphabets;
 alphabets=i=0;
 printf("enter the string:");
 puts(str);
 while(str[i]!='\0')
 {
  if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='z'))
  {
    alphabets++;
    }
    i++;
    }
    return 0;
    }
 
