#include<stdio.h>
int main()
{
    int a=1;
    int i;
    char b[10]="SK" , c[10]="TA", d[10]="10p" ,e='z' ,f='y';
    for(i=100000;i<100020;i++)
    {
        printf("%d%s%s%s%c%c%d\n",a,b,c,d,e,f,i);
    }
}
