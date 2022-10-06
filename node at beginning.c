#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void main()
{
    struct node *h=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    h->data=10;
    h->link=NULL;
     struct node *ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=20;
    ptr->link=NULL;
    h->link=ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=30;
    ptr->link=NULL;
    h->link->link=ptr;
    struct node* kn;
    kn=h;
    while(kn!=NULL)
    {
        printf("%d\n%d\n",kn->data,kn->link);
        kn=kn->link;
    }
    struct node* c;
     c =(struct node*)malloc(sizeof(struct node));
    c->data=50;
    c->link=NULL;
    c->link=ptr;
    ptr->link=c;
    //h->link->link->link=c;

    printf("c->data value is:%d\n c->link is last node address:%d\n ptr->link is c->link address:%d\n",c->data,c->link,ptr->link);
    ptr=h;
    while(ptr!=NULL)
    {
        printf("%d\n%d\n",ptr->data,ptr->link);
        ptr=ptr->link;
    }

}
