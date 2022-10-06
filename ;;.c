#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the position:");
    scanf("%d",&pos);
    num=num^(1<<pos);
    printf("%d",num);
}
