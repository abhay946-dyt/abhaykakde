#include<stdio.h>
int k(char *start,int n)
{
int i;
for(i=0;i<n;i++)
printf("%x",start[i]);
}
int main()
{
int i=0xb110101110;
k((char*)&i,sizeof(i));
return 0;
}
