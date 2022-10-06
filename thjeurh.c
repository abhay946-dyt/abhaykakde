#include<stdio.h>
char *k(char []);
int main()
{
char a[20];
gets(a);
char *h=k(a);
printf("%s",h);
}
char *k(char  o[])
{
int n;
printf("enter the index :");
scanf("%d",&n);
return o+n;

}
