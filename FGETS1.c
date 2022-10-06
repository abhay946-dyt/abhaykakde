#include<stdio.h>

void main()
{
char ch;
    FILE *fp;
    fp=fopen("v.txt","r");
    char c[10];
    fgets(c,10,fp);
    printf("%s",c);


    fclose(fp);
}
