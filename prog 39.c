#include<stdio.h>
int main()
{
    int a;
    printf("enter a ");
    scanf("%d",&a);
    if(a>75)
    {
        if(a>90)
        {
            printf("%d is S grade",a);
        }
        else
            {
            printf("%d is A grade",a);
            }

    }
    else
    {
        printf("%d is B grade",a);
    }
}

