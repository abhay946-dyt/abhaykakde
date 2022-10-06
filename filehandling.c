#include<stdio.h>

void main()
{
char ch;
    FILE *fp;
    fp=fopen("v.txt","r");
    ch='l';
    ch=fgetc(fp);
    printf("%c",ch);
    fclose(fp);
}
