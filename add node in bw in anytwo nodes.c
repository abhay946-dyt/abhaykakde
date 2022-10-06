
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void main()
{
    struct node *h=NULL;
     struct node *ptr=NULL;
     struct node *ptr2=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr2=(struct node*)malloc(sizeof(struct node));
    h->data=10;
    h->link=ptr;
    ptr->data=20;
    ptr->link=ptr2;
    //h->link=ptr;
    ptr2->data=30;
    ptr2->link=NULL;
    //h->link->link=ptr;
    struct node* c;
     c =(struct node*)malloc(sizeof(struct node));
    c->data=50;
    c->link=NULL;
    struct node* kn;
    kn=h;
    while(kn!=NULL)
    {
        printf("%d\n%d\n",kn->data,kn->link);
        if(kn->data==20)
        {

    c->link=kn->link;
    kn->link=c;
        }
        kn=kn->link;
    }

    //h->link->link->link=c;

    //printf("c->data value is:%d\n c->link is last node address:%d\n ptr->link is c->link address:%d\n",c->data,c->link,ptr->link);
    while(kn!=NULL)
    {
        printf("%d\n%d\n",kn->data,kn->link);
        kn=kn->link;
    }

}
