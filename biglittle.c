#include<stdio.h>
void show(char *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%.2x",s[i]);

    }
    //printf("\n");
}
int main()
{
    int i=0x01234567;
    show((char *)&i,sizeof(i));
    //getchar();
    //
    return 0;
}
