#include<stdio.h>
int main()
{
  int count=0;

  FILE *fp;
  fp=fopen("v.txt","r");
  char c[50];
  while(!feof(fp))
  {
      fgets(c,50,fp);
      count++;
      }
      printf("%d",count);
     fclose(fp);
  }
