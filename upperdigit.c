#include<stdio.h>

int main()
{
char a;
  printf("enter a digit ");
  scanf("%c",&a);
  int lower=a>='0';
  int upper=a<='9';
    int res=lower&&upper;
    printf("theb%c is  character  is digit  %d",a,res);
    return 0;
}