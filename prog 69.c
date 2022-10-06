#include<stdio.h>
float findarea(float r)
{
   float area;
    area=3.142*r*r;
    return area;
}
float findcircum(float r)
{
   float circum;
    circum=2*3.142*r;
    return circum;
}

int main()
{
    float r;

    printf("\n enter radius");
    scanf("%f",&r);
      printf("area is %f\ncircumference is %f",findarea(r),findcircum(r));

}


