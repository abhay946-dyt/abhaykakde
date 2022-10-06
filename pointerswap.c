#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values :");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("this is the swapping value %d\n %d :",a,b);
}
swap(int *a,int *b)
{
    int temp;
    temp=(*a);
    (*a)=(*b);
    (*b)=temp;

}
