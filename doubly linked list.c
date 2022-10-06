#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* nxt;
};
void main()
{
    struct node *head;
        head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=10;
    head->nxt=NULL;
    struct node* ptr;
        ptr=(struct node*)malloc(sizeof(struct node));
    ptr->prev=head;
    ptr->data=20;
    ptr->nxt=NULL;
    head->nxt=ptr;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",head->data,head->nxt,ptr->data,ptr->nxt,ptr->prev,ptr->data,head->prev);
}
