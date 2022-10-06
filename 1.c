#include<stdio.h>
int main()
{
    int i;
    char a[]="Hello world";

    for(i=0;i<11;i++)
    {
        if(a[i]=='\0')
        {
            a[i]="SKUP";
            printf("%c",a[i]);
        }
        printf("%c",a[i]);
    }
}
