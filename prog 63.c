int main()
{
        int arr[3][3],i,j;
        printf("enter an array");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",& arr[i][j]);

            }
        }
        for(i=1;i<2;i++)
        {
             for(j=0;j<3;j++)
             {
                 printf("%d",arr[i][j]);
             }
        }

}
