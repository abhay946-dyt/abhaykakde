#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void main()
{
    struct node *head=NULL;
    struct node *ptr;


    head=(struct node *)malloc(sizeof(struct node));



    while(ptr!=NULL)
    {
    head->data=10;
    head->link=ptr;
    ptr=ptr->link;

    printf("%d\n",ptr);
  //  printf("%d",head);

    }


}
