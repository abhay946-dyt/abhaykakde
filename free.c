#include<stdio.h>
int main()
{

    int *ptr;
    ptr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",&(ptr+i));
    }
 for(int i=0;i<5;i++)
    {
        printf("%d",*(ptr+i));
    }
     free(ptr);
}
//    //int *ptr1;
//    ptr=(int*)calloc(5,sizeof(int));
//    for(int i=0;i<5;i++)
//    {
//        scanf("%d",&ptr+i);
//    }
//    printf("\n");
//    for(int i=0;i<5;i++)
//    {
//        printf("%d",(ptr+i));
//    }
//     printf("\n");
//    free(ptr);
//
// /*for(int i=0;i<3;i++)
//    {
//        printf("%d\n",(ptr+i));
//    }*/
//
//    }
