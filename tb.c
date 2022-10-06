#include<stdio.h>

void main()
{
char ch;
 int i=50;
    FILE *fp;
    fp=fopen("v.txt","r");
    char c[50];
    while(!feof(fp))
    {
    fgets(c,50,fp);
    printf("%s",c);
    i++;
    }

    fclose(fp);
}
