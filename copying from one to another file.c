#include<stdio.h>
//#include"copying from one to another file.c"
int main()
{
    FILE *pt2=NULL;
    FILE *pt1=NULL;
    pt1=fopen("C:/Users/lenovo/Desktop/naveen/file.txt","a");
    pt2=fopen("C:/Users/lenovo/Desktop/naveen/file1.txt","w+");
   char a[50];
    while(!feof(pt2))
    {
        fgets(a,50,pt2);
        fputs(a,pt1);
        //printf("%s",pt1);
    }
fclose(pt1);
fclose(pt2);
}
