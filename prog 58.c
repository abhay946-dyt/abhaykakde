int main()
{
    int a[3],b[3],rev=0,rem,i,j;
    printf("enter a array");
    for(int i=0;i<=2;i++)
    {
        scanf("\n%d",&a[i]);
    }
        for(i=2;i>=0;i--)
        {
            b[2-i]=a[i];
        }
        for(int i=0;i<=2;i++)
        {
            printf("%d",b[i]);
        }
}



