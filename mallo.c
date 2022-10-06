#include<stdio.h>
void main()
{
    int* ptr,i;
    int *ptr1;
    ptr=(int*) malloc(2*sizeof(int));
    printf("enter the value:\n");
    for(i=0;i<8;i++)
    {
    scanf("%d",&ptr[i]);
    }
     for(i=0;i<8;i++)
    {
    printf("Malloc:%d\n",ptr[i]);
    }
    printf("\n");
    ptr1=(int*) realloc(sizeof(int));
for(i=0;i<20;i++)
    {
    printf("relloc:%d\n",ptr1[i]);
    }
}
