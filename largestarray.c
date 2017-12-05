#include<stdio.h>
int main()
{
 int small,secondsmall;
 int array[100],size,i;
 printf("\nhow many elements do you want to enter:");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&array[i]);
  if(array[0]<array[1]){
    smallest=array[0];
    secondsmall=array[1];
    }
    else
    smallest=array[1];
    secondsmallest=array[0]
    }
    for(i=2;i<size;i++)
    {
     if(array[i]<smallest)
     {
       smallest=array[i];
       secondsmallest=smallest;
       }
       else if(array[i]<secondsmallest)
        secondsmallest=array[i];
        }
        }
        printf("\nsecondsmallesteement is %d",secondsmallest);
        getch();
        return 0;
        }
