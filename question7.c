#include<stdio.h>
int main()
{
int n,pos,c;
printf("enter the bet to set ");
scanf("%d",&n);
printf("enter the poistion ");
scanf("%d",&pos);
n=n|(1<<pos);
printf(" after the bit %d\n", n);
printf("enter the bet to set ");
scanf("%d",&n);
printf("enter the poistion ");
scanf("%d",&pos);
n=n|(1<<pos);
printf(" after the bit %d\n", n);
for(int i=0;i<3;i++)

{
    scanf("%d",&c);
 int r=n&(1<<c);
 if(r==0)
 {
     printf("%d bit is clear of TOCON\n",i);
 }
 else
 {
     printf("%d bit is set of TOCON\n",i);
 }
}

}
