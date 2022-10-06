#include<stdio.h>
int k(int [], int );
int main()
{
int h;
int size=5;
int a[]={10,20,30,40,50};
h=k(a,size);
printf("%d",h);



}
int k(int a[], int marks)
{
int i,sum=0,h=0;
for(i=0;i<marks;i++)
{
sum=sum+a[i];
}
h=sum/marks;
}
