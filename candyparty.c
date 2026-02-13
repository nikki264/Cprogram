#include<stdio.h>
#include<stdlib.h>

int main()
{
int  tea,candy;
printf("enter the   amount of tea: ");
scanf("%d",&tea);
printf("enter the   amount of candy: ");
scanf("%d",&candy);

 if(tea<5||candy<5) 
 {
 printf("0");
 }
   else if (tea>=2*candy||candy>=2*tea){
 printf("2");
 }
else
{
printf("1");
}
    return 0;
}