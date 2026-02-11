#include<stdio.h>

int main() 
{
int temp,summer ;
printf("enter the value of temp:");
scanf("%d",&temp);
printf("enter  1 for summer \t  enter 0 for  not summer");
scanf("%d",&summer);
 if(summer){ 
 if(temp=60&&temp<100){
 printf("true");
 }
 else  {
 printf("false");
 } 
 }
 else
 {
 if(summer>=60&&temp<=90){ 
 printf("ture");
 }
 else
 {
 printf("false");
 }
 }
    return 0;
}