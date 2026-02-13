#include<stdio.h>

int main() 
{
int a,b ,c;
printf("enter the value in A:");
scanf("%d",&a);
printf("enter the value in B:");
scanf("%d",&b);
printf("enter the value in C:");
scanf("%d",&c);
int ab=a+b,bc =b+c,ca=c+a;
 if(ab==10||bc==10||ca==10){
 printf("10");
 }
 else if(a>10||b>10||c>10){
 printf("5");
 }
 else
 {
 printf("0");
 }
    return 0;
}