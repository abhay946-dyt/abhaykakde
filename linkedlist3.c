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
    struct node *current=NULL;

    head=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    printf("%d\n %d\n",head->data,head->link);

    current=(struct node *)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current;
    printf("%d\n %d\n %d\n",current->data,current->link,head->link);

    current=(struct node *)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link->link=current;
    printf("\n %d\n %d\n %d\n",current->data,current->link,head->link->link);

    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n%d\n %d",ptr->data,ptr->link);
        ptr=ptr->link;
    }



}
