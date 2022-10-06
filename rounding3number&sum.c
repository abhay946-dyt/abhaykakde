#include<stdio.h>

int main()


{
int a,b,c,d;
printf("enter the values :");
scanf("%d",&a);


if(a%10<=5)
{
        printf("%d\n",(a/10)*10);

}
else{
    printf("%d\n",(a/10)*10+10);
}
scanf("%d",&b);

if(b%10<=5)
{
        printf("%d\n",(b/10)*10);

}
else{
    printf("%d\n",(b/10)*10+10);
}
scanf("%d",&c);

if(c%10<=5)
{
        printf("%d\n",(c/10)*10);

}
else{
    printf("%d\n",(c/10)*10+10);
}



printf("%d\n",a+b+c);
}
