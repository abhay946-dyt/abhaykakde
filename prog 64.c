int main()
{
        char arr[10][10];
        int i,j;
        printf("enter an array");
        for(i=0;i<=9;i++)
        {
            for(j=0;j<=8;j++)
            arr[i][j]=0;
        }
        for(i=0;i<=9;i++)
            {

                scanf("\n004%c",&arr[i][9]);

            }

        for(i=0;i<=9;i++)
            {
           for(j=0;j<=9;j++)
             {
                 printf(" %c\t",arr[i][j]);
             }
        printf("\n");
        }
}



