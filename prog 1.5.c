int main()
{
    char str[30];
    int i;
    printf("enter the string");
    scanf("%s",&str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }


     else if(str[i]>=97 && str[i]<=122)
    {
        str[i]=str[i]-32;
    }
    }
    printf("upper to lower is %s\n",str);
    //printf("lower to upper is %s\n",str);
    return 0;
}

