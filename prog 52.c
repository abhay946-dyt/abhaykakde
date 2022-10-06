#include<stdio.h>
int main()
{
    int a;
    printf("enter a number n");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("false");
    }
    else if(a%3==0 || a%5==0)
    {
        printf("true");

    }
    else{
        printf("false");
    }
}
