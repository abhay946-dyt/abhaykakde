int main()
{
    int a[3],i;
    printf("enter the array");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==2 && a[1]==3)
    {
       a[1]=0;
    }
    else if(a[1]==2 && a[2]==3)
        {
    a[2]=0;
        }

printf("%d%d%d",a[0],a[1],a[2]);
}
