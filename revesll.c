#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *p;
};
struct node *traverse(struct node *);
struct node *traverse(struct node *head)
{
		struct node *temp=NULL;
		struct node *temp2=NULL;
		while(head!=NULL)
		{
			temp2=head->p;
		        head->p=temp;
			temp=head;
			head=temp2;
		}
		head=temp;
}
void display(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
		printf("empty list");
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->p;
		}

	}
}
void main()
{
        struct node *head=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->p=NULL;

        struct node *current=(struct node*)malloc(sizeof(struct node));
        current->data=20;
        current->p=NULL;
        head->p=current;

        current=(struct node*)malloc(sizeof(struct node));
        current->data=30;
        current->p=NULL;
        head->p->p=current;

        head=traverse(head);
	display(head);
}
