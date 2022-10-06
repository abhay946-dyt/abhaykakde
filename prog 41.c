
#include<stdio.h>
int main()
{
    int marks;
    printf("enter a marks");
    scanf("%d",&marks);
    switch(marks)
    {
        case 0 ... 30:printf("fail");
               break;
        case 31 ... 60:printf("pass");
               break;

    }
}
