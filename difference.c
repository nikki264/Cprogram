#include<stdio.h>
void add(int i, int n,int sum)
{
}
int main()
{
int a, b,c;
int small,medium,big;
    printf(" enter the value a");
    scanf("%d",&a);
    printf(" enter the value b");
    scanf("%d",&b);
   printf(" enter the value c");
    scanf("%d",&c); 
    if(a>b&&a>c){
    big =a;
    if(b>c)
    {
       medium =b;
       small=c;
   } else
   {
   medium =c;
   small =b;
   }
    }
    else if(b>a&&b>c){
    big =b;
    if(a>c)
    {
       medium =a;
       small=c;
   } else
   {
   medium =c;
   small =a;
   }
    }
   else
   {
    big =c;
    if(b>a)
    {
       medium =b;
       small=a;
   } 
   else
   {
   medium =a;
   small =b;
   }
  }
    if(big-medium== medium -small){ 
    printf("ture");
    }
    else
    {
    printf("false");
    }
    return 0;
}
