#include<stdio.h>
int *k(int []);
int main()
         {
             int a[]={1,2,3,4,5};
           int * h=k(a);
             printf("%d",*h);
         }
         int *k(int x[])
         {

             x=x[1]+2;
             return x;
         }
