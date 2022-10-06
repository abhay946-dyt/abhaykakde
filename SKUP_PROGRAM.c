#include<stdio.h>
int main()
{
char *a[]={"kumar","","kumar"};
for(int i=0;i<50;i++)
{
if(a[i]=="")
{
a[i]="SKUP";
}
}
for(int i=0;i<50;i++)
{
printf("%s\t ",a[i]);
}
}
