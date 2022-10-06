#include<stdio.h>
int main()
{
int i,j,s=1,k,*ptr;
int a[]={1,24,5,8,5,6};
s=(sizeof(a))/4;
printf("the sze of array %d: ",s );
{
for(i<0;i<s;i++)
{
for(j<0;j<s;j++)
{
if(a[i]<a[j])
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
for(i=0;i<s;i++)
{
ptr=&a[i];
printf("%d\n ",*ptr);
}

}

