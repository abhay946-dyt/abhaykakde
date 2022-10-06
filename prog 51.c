#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
        break;
    {
        printf("outer loop\n");
        for(j=1;j<=3;j++)
            break;
    {
        printf("inner loop\n");
    }
}
}
