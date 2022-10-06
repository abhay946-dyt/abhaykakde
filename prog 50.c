int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%3==0 || a%5==0)
    {

        printf("true");
    }
    else if(a%3==0 && a%5==0)
       {

       printf("false");
       }
    else{
        printf("false");
}
}
