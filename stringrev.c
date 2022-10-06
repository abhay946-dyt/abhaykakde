#include<stdio.h>
char *k(char []);
int main()
{
char a[10];
gets(a);
char *h=k(a);
printf("%s",h);
}
char *k(char  r[])
{
    char *h=strrev(r);
    return h;

}
