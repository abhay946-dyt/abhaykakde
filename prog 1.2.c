#include<stdio.h>
int fun(int*,int*);
void main()
{
    int x=20;
    int y=10;
    fun(&x,&y);
    printf("%d\n%d",x,y);

}
int fun(int *x,int *y)
{
   *x=30;
    *y=40;
    printf("%d\n%d\n",*x,*y);
}
