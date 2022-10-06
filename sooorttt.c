#include<stdio.h>
int sort(int n,int *p[])
{
    int i,j;
    printf("Sorted array are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)<*(p+j))
            {
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Element - %d:",i);
        printf("%d",*(p+i));
        printf("\n");
    }

}
int main()
{
    int i,n,a[20];
    printf("Input the number of elements to store in the array:");
    scanf("%d",&n);
    printf("Input %d number of elements in this array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element - %d:",i);
        scanf("%d",&a[i]);
    }
    sort(n,a);

}
