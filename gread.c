#include<stdio.h>

void main()
{
char ch;
    FILE *fp;
    fp=fopen("v.txt","r");
    for(int i=0;i<10;i++)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

    fclose(fp);
}
