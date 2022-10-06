#include<stdio.h>
char* display();
int main()
{
    char *str;
    str=display();
    printf("%s\n",str);
    printf("%s",str);
}
char* display()
{
    static char str[]="xerox";
    return str;
    //return "hello";
}


