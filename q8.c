#include<stdio.h>
void main()
{
int b,c;
int a=0x06;

a=a|(1<<3);
b=a|(1<<6);
c=a|(1<<7);

printf("%d\n%d\n%d\n",a,b,c);
}


