#include<stdio.h>


int main()
{

    FILE *fp=NULL;
    fp=fopen("vb.txt","w");
  if(fp==NULL)
  {
    printf("ERROR");

}
else
{
int i=10;
char b='K';
char ch[50]=" kumar";
float a=2.2;
fprintf(fp,"%c,%d,%s,%f",b,i,ch,a);

 fclose(fp);
}
}
