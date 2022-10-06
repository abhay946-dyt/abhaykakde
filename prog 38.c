#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a b c");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>c)
    {
        if(a>b)
        {
            printf("%d is the largest",a);
        }
        else
            {
            printf("%d is the largest",b);
            }

    }
    else
    {
        printf("%d is the largest",c);
    }
}
