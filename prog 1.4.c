
int main()
{
    int a,b,c,d;
    printf("enter a and b");
    scanf("%d\n%d",&a,&b);
    fun(a,b);
    fun1(&a,&b);
}
int fun(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d\n",c);
}
int fun1(int *a,int  *b)
{
    int d;
    d=(*a-*b);
    printf("sub is %d\n",d);
}
