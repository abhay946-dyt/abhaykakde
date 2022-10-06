#include<stdio.h>
int main()
{
    int v=0x0b110101110;
    int c=0;

    printf("value before converting:0x%x\n",v);
    c |= ((0xff & v) << 24);
    c |= (((0xff << 8) & v ) << 8);
    c |= (((0xff << 16) & v ) >> 8);
    c |= (((0xff << 24) & v ) >> 24);
    printf("value after converting:0x%x\n",c);
}
