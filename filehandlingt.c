#include<stdio.h>
int main()
{
    FILE *dp=NULL;
    dp=fopen("C:/Users/lenovo/Desktop/naveen/file.txt","r");
    char a[50];
    int count=0;
    while(!feof(dp))
    {
        fgets(a,50,dp);
        printf("%s",a);
        count++;
    }
    printf("\nnumber of lines:%d",count);
    fclose(dp);
}
