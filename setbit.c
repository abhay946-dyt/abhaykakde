#include<stdio.h>
int main()
{
int num,var;
printf("enter the no :");
scanf("%d",&num);
printf("enter the poistion :");
scanf("%d",&var);
printf("before the number =%d\n",num);
num=num^(1<<var);
printf("after the number =%d\n",num);
}
