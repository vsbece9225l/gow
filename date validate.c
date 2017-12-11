#include<stdio.h>
int main()
{
 int day,month,year;
 printf("enter the date DD/MM/YYYY format:");
 scanf("%d%d%d",&day,&month,&year);
 if(year>=1900&&year<=9999)
 {
  if(month>=1&&month<=12)
  {
   if((day>=1&&day<=31)&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))
   {
    printf("date is valid\n");
    }
    else if((day>=1&&<=30)&&(month==4||month==6||month==9||month==11))
    {
     printf("date is valid\n");
     }
     else if((day>=1&&day<=28)&&(moth==2))
     {
      printf("date is valid\n");
      }
      else if((date==29&&month==2&&(year%4==0)||(year%400==0&&year%100!=0))
      [
       printf("date is valid\n");
       }
       else
       {
        printf("date is invalid\n");
        }
        else
        {
         printf("date is not valid\n");
         }
         return 0;
         }
        
