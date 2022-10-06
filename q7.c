#include<stdio.h>
int main()
{

  register int a=0xF3;
int value,n;
 printf("enter the number :");
scanf("%d",&n);
printf("enter the position :");
scanf("%d",&value);
n =n|(1<<value);
printf("set a bit %d\n",n);
printf("_________________________________________________________________________________________\n");
//
//  register int a=0xF3;
//int value,n;
 printf("enter the number :");
scanf("%d",&n);
printf("enter the position :");
scanf("%d",&value);
n =n&~(1<<value);
printf("clear the bit  %d\n",n);
printf("_________________________________________________________________________________________\n");

  //register int a=0xF3;
//int value,n;
 printf("enter the number :");
scanf("%d",&n);
printf("enter the position :");
scanf("%d",&value);
n =n^(1<<value);
printf("toggle %d\n",n);
}

