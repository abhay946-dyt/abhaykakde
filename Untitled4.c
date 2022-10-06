#include<stdio.h>
struct abc
{
    int a;
    char b;
    float c;
};
int main()
{
    struct abc s={10,'A',5.5};

    fff(s);
}
int fff(struct abc s)
{
    printf("%d\n %c\n %0.2f\n",s.a,s.b,s.c);
}









