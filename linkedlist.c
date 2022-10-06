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
    struct node *current;

    head=(struct node *)malloc(sizeof(struct node));
    current=(struct node *)malloc(sizeof(struct node));
    current=(struct node *)malloc(sizeof(struct node));


    head->data=10;
    head->link=current;
    current->data=20;
    current->link=current;
    //head->link=current;
    current->data=30;
    current->link=NULL;
    head->link->link=current;

    printf("%d\n",head->data);
    printf("%d\n",current->data);
    printf("%d\n",*head->link);
    printf("%d",*head->link->link);



}
