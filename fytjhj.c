#include<stdio.h>l
int add(int n)
{
    int last,sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+fact(last);
    }
    return sum;
}

int fact (int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    return fact;
}
int main()
{
    int n,p;
    printf("enter the numbers to be enter");
    scanf("%d",&n);
    p=add(n);
    if(n==p)
    {
    printf(" strong number");
    }
    else{
        printf(" not a strong number");
    }


        }













