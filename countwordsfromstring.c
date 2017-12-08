#include<stdio.h>
int main()
{
 char str[50];
 int count=0,i;
 printf("\nenter the string:");
 scanf("%[^\n]",str);
 while(str[i]==' ')
 {
   count=count+1;
   }
   printf("the total number of words in a given string is %d",count+!);
   return 0;
