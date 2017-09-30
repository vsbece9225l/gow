#include<stdio.h>
#include<string.h>
int main()
{
 char str[80];
 printf("enter the string\n");
 gets(str);
 strrev(str);
 printf("the reversed string is%s",str);
 return 0;
 }
