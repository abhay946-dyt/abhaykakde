int main()
{
    int i,j,k=5;
    for(i=1;i<=k;i++)
    {
        for(j=5;j>=1;j--)
        {
            if(i>=j)
            printf("* ");
            else
                printf(" ");
        }
        printf("\n");

    }
}
