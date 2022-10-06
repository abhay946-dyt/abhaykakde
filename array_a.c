#include<stdio.h>
int main()
{
    /*int a[]={1,2,3,4};
    printf("%d",sizeof(a));
*/
int i;
float a[5];
int c;
printf("enter the elements ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
c=sizeof(a)/sizeof(a[0]);


   printf("%d",c);

}
}
