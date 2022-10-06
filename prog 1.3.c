int main()
{
    int n,rem,c=0,d=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c=c+rem;
        d=d*rem;
        n=n/10;
    }
    if(c==d)
        {
        printf("true");
        }

    else
        printf("false");

}
