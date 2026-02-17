#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
int  r1;
int  r2;
printf( "enter the number \n");
  scanf("%d",&num);
   printf(" enter the starting point range");
    scanf("%d",&r1);
    printf(" enter the ending point");
    scanf("%d",r2);
    int count = 0;
    for( int i=r1;i<=r2; i++){
    if(num%i==0){
    count ++;
    }
    }
    printf("count =%d",count);
    return 0;
}