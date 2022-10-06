int main()
{
    int i=1,a,sum=0;
    printf("enter a number\n");
    while(i<=10)

    {

        scanf("%d",&a);
        i++;
        if(a<0)
        {
            continue;
        }
        sum=sum+a;

    }
    printf("sum is %d",sum);
}
