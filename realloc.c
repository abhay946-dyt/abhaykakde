#include<stdio.h>
int main()
{

    int *ptr;
    int *ptr1;
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr+i);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",(ptr+i));
    }
     printf("\n");
    ptr1=(int*)realloc(ptr,3*sizeof(int));

 for(int i=0;i<3;i++)
    {
        printf("%d\n",(ptr+i));
    }

    }
