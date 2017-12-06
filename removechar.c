#include<stdio.h>
int main()
{
 char str[50],str1[50];
 char ch,ch1;
 int i,j=0,size;
 printf("enter the string:");
 gets(str);
 printf("enter the character you want to remove:");
 scanf("%ch",ch);
 size=strlen(str);
 for(i=0;i<size;i++)
 {
  if(str[i]!=ch)
  {
    ch1=str[i];
    str1[j]=ch1;
    }
    j++;
    }
    str1[j]='\0';
    printf("\n correct string is %s",str1);
    return 0;
    }
 
 
