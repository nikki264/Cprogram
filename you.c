#include<stdio.h>
#include<stdlib.h>

int main()
{
int  date,you,i;
printf("enter the  value of date: ");
scanf("%d",&date);
printf("enter the  value of you: ");
scanf("%d",&you);
for(int i=0;i<=10;i++)
{
 if(you>=8||date>=8) 
 {
 printf("2");
 }
   else if (you<=2||date<=2)
 {
 printf("0");
 }
else
{
printf("1");
}
}
    return 0;
}