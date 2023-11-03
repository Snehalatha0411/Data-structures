#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *p;
};
void traverse(struct node *head,int data);
void traverse(struct node *head,int data)
{
	struct node *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==data)
		{
			printf("%d",data);
		}
		temp=temp->p;
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

        traverse(head,head->p->data);
}
