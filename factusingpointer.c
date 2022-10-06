#include<stdio.h>
int *fact(int );
int main()
{
  int *p;
    int i,a;
    printf("enter the values : ");
    scanf("%d",&a);
    p=fact(a);
    printf("%d",*p);
}
int *fact(int b)
{
    int fact=1,i;
    for(i=1;i<=b;i++)
    {
        fact=fact*i;
    }
        int *p=&fact;
    return p;
}
