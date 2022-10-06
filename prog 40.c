#include<stdio.h>
int main()
{
    int a,b;
    char operator;
    printf("enter the value and operator of a and b");
    scanf("%d\n%d\n%c",&a,&b,&operator);

    switch(operator)
    {
        case '+':printf("%d",a+b);
               break;
        case '-':printf("%d",a-b);
               break;
        case '*':printf("%d",a*b);
               break;
        case '/':printf("%d",a/b);
               break;
        case '%':printf("%d",a%b);
               break;

        default:printf("invalid operator");
               break;
    }
}
