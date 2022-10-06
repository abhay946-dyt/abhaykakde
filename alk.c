#include<stdio.h>
int num,pos;
int fun(int,int);
int main()
{
    printf("enter the value of num");
    scanf("\n%d",&num);
    printf("enter the value of pos");
    scanf("\n%d",&pos);
    printf("after bit flip %d",fun(num,pos));
}
int fun(int num,int pos)
{

    num=num^(1<<pos);
    return num;
}


