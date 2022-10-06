#include<stdio.h>
int main()
{
    int i=0;
    FILE *fp=NULL;
    FILE *p;
    fp=fopen("v.txt","r");
    p=fopen("vb.txt","w");
    {


    char a[200];
    while(!feof(fp))
    {
        fgets(a,200,fp);

        fputs(a,p);
    }
    fclose(fp);
    fclose(p);
}
}
