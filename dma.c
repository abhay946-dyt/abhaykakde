#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",ptr+i);
    }
   // printf("%d\n",*ptr);
    //printf("%d",sizeof(ptr));

}
