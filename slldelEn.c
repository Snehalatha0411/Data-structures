#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *p;
};
void traverse(struct node *head)
{
	struct node *temp=NULL;
	temp=head;
	struct node *new=NULL;
	while(temp!=NULL)
	{
		//printf("%d\n",temp);
  		new=temp->p;
		free(temp);
		temp=new;
	}

free(temp);
printf("%d\n",temp);
}
int main()
{
        struct node *head=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->p=NULL;

        struct node *current=(struct node*)malloc(sizeof(struct node));
        current->data=20;
        current->p=NULL;
        head->p=current;

        traverse(head);
}
