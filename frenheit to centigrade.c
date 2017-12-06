#include<stdio.h>
int main()
{
 float f,c;
 printf("enter the fahrenheit temperature:");
 scanf("%f",&f);
 c=5.0/9*(f-32);
 printf("\n%f fahrenheit is %f centigrade",f,c);
 getch();
 return 0;
 }
