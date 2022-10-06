#include<stdio.h>


int main()
{
   char ch;
    FILE *fp=NULL;
    fp=fopen("v.txt","w");
    printf("enter the text : ");
    gets(ch);
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
printf(fp,"%c,%d,%s,%f",b,i,ch,a);

 fclose(fp);
}
}
