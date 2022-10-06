//static
#include<stdio.h>
    void main()
{
printf("%d",display());
}

int display()
{static int x=10;
x+=10;
return x;
}
