#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a\n b\n c");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("%d",20);
    }
    else if(a==b || b==c || c==a)
    {
        printf("10");
    }
    else
    {
        printf("0");
    }
}
