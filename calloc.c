#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("%d\n",*ptr);

     printf("%d",sizeof(ptr));
}
