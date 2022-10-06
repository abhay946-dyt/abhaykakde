#include<stdio.h>
#include"f3.c"
int display()
{
    extern int x;
    x++;
    return x;

}
