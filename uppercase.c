#include<stdio.h>
int main()
{
int i;
char a[100];
printf("enter the values :");
scanf("%s",&a);
for (i=0;a[i]!=0;i++)
{

if(a[i]>=65&&a[i]<=91)
{
    a[i]=a[i]+32;
    }
else if(a[i]>=97&&a[i]<=123)
{
    a[i]=a[i]-32;
    }
}
printf("new string is :%s ",a);
}
