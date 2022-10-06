#include<stdio.h>
int main()
{
    int i;
    char a[]="Hello world";

    for(i=0;i<11;i++)
    {
        if(a[i]==NULL)
        {
            a[i]="SKUP";
            printf("%d",a[i]);
        }
        printf("%c",a[i]);
    }
}
