#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
        int data;
        struct single_linked_list *p;
};
void traverse(struct single_linked_list *head);
void insert_random(struct single_linked_list *head,int data,int position);
int main()
{
        struct single_linked_list *head=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        head->data=10;
        head->p=NULL;

        struct single_linked_list *current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=20;
        current->p=NULL;
        head->p=current;

        current=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        current->data=30;
        current->p=NULL;
        head->p->p=current;

        //printf("%d %d %d",head->data,head->p->data,head->p->p->data);
	printf("Before inserting a random node\n");
	traverse(head);
	printf("After inserting a random node\n");
	insert_random(head,40,3);
	traverse(head);
}

void traverse(struct single_linked_list *head)
{
        struct single_linked_list *temp=head;
        
        if(temp==NULL)
        {
        printf("single linked list is empty");
        exit(0);
        }

        while(temp!=NULL)
        {
        printf("%d->",temp->data);
        temp=temp->p;
        }
	printf("NULL\n");
}

void insert_random(struct single_linked_list *head,int data,int position)
{
	struct single_linked_list *new=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
        new->data=data;
	new->p=NULL;

	struct single_linked_list *temp=head;
	while(position!=2)
	{
		temp=temp->p;
	        position--;
	}
	new->p=temp->p;
	temp->p=new;
}
