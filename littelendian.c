#include<stdio.h>
int main()
{
int val=0xA0B0C0D0;
int con=0;
con |=((0x000000ff&val)<<24);
con |=((0x0000ff00&val)<<8);
con |=((0x00ff0000&val)>>8);
con |=((0xff000000&val)>>24);
printf("%x\n",con);
return 0;
}
