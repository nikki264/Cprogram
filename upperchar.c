#include<stdio.h>
#include<stdlib.h>

int main()
{
char a;
    printf(" enter alphabet :");
    scanf("%c",&a);
    int lower =a>='A';
    int upper = a<='Z';
    int res =lower&& upper;
    printf(" the %c is upper case alphabet is %d",a, res);
    return 0;
}