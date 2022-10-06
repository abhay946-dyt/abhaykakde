#include<stdio.h>
void main()
{
    int* ptr;
    ptr=(int*) calloc(0,sizeof(int));
    printf("enter the value:");
    scanf("%d",ptr);
    printf("%d",*ptr);
}

