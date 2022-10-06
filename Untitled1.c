#include<stdio.h>
int recformax(int arr[],int len)
{
    int maximum;
    if(len==1)
    {
        maximum=arr[0];
        return maximum;
    }
    else
    {
        return maximum= arr[len]<recformax(arr,len-1))?(arr[len]:recformax(arr,len-1);
    }
    }
    int main()
    {
        int Arr[]={89,98,76,32,21,35,100};
        int length=sizeof(Arr)/sizeof(Arr[0]);
        printf("maximum in the arrays is",<<recformax(Arr,length));
        return 0;
    }


