#include<stdio.h>
char *k(char []);
int main()
{

    char a[15],n;
    printf("enter the strings :");
    scanf("%s",&a);
    char *j=k(a);

    printf("%s",*j);
    /*{
    if(a[0]=='x')
    {
        printf("%s\n",a+1);
    }
    else{
        printf("%s\n",a);
    }
    }*/
}
char *k(char x[])
{

    if(x[0]=='x')
    {
        printf("%s\n",x+1);
    }
    else{
        printf("%s\n",x);
    }



    //.return k;

}



