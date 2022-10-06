#include<stdio.h>
int fun(int[],int);

int fun1(int[],int);
int main()
{
//    int length,fun;
    char  str1[10]="akshata";
    char str2[10]="vishal";
        length(str1);
        modify(str2);
}
int length(char str1[])
{
    printf("%d\n %s",strlen(str1),str1);
}
int modify(char str2[])
{
    printf("%s",strupr(str2));
}
