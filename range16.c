#include<stdio.h>
#include<stdlib.h>

int main()
{ int a;
    printf(" enter a number=");
    scanf("%d",&a);
    int lower=a>=4;
    int upper =a<=6;
    int res =lower&&upper;
    printf("the %d is  in the  range -4 to 6 : %d",a,res);
    return 0;
}