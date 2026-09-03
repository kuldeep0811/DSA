#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
   
};

int main()
{
    struct Node *head=malloc(sizeof(struct Node));
    struct Node *first=malloc(sizeof(struct Node));
    struct Node *second=malloc(sizeof(struct Node));


    head->data=10;
    head->prev=NULL;
    head->next=first;
    

    first->data=20;
    first->next=second;
    first->prev=head;
    

    second->data=30;
    second->next=NULL;
    second->prev=first;

    struct Node *temp=head;

    while (temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
 


    
    return 0;
}